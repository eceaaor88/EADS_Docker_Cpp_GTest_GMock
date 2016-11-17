#include <string>
#include <map>

#include "RomanNumbers.h"

/*
Requirement 1: letters 'I' meaning '1', 'V' meaning '5', 'X' meaning '10', 'L' meaning
'50', 'C' meaning '100', 'D' meaning '500', and 'M' meaning '1000'.
Requirement 2: The symbols 'I', 'X', 'C', and 'M' can be repeated at most 3 times in a
row.
Requirement 3: The symbols 'V', 'L', and 'D' can never be repeated.
Requirement 4: The '1' symbols ('I', 'X', and 'C') can only be subtracted from the 2
next highest values ('IV' and 'IX', 'XL' and 'XC', 'CD' and 'CM').
Requirement 5: Only one subtraction can be made per numeral ('XC' is allowed,
'XXC' is not).
Requirement 6: The '5' symbols ('V', 'L', and 'D') can never be subtracted.
*/

using namespace std;

map<char, int> romanNumbersTemplate = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                {'C', 100}, {'D', 500}, {'M', 1000}};

const int MAX_REPETEABLE = 3;
const int MIN_REPETEABLE = 1;


const bool RomanNumbersChecker(string romanNumber) {
    bool result = true;
    bool sameNumberInARow = false;
    char previousNumber = 0;

	map<char, int> romanNumbersValues = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};

	map<char, int> repeatableNumbers = {{'I', MAX_REPETEABLE}, {'V', MIN_REPETEABLE}, {'X', MAX_REPETEABLE},
					{'L', MIN_REPETEABLE}, {'C', MAX_REPETEABLE}, {'D', MIN_REPETEABLE}, {'M', MAX_REPETEABLE}};


	for(char& c: romanNumber) {
			map<char, int>::iterator current, previous;
			current = romanNumbersValues.find(c);
			if(current == romanNumbersValues.end())
				return false;
			if (previousNumber != 0) {
				previous = romanNumbersValues.find(previousNumber);
				if(previous->second < current->second) {
					if (sameNumberInARow)
						return false;
					int div = current->second / previous->second;
					if ((div != 5) && (div != 10))
						return false;
					//VL es una excepcion a la regla de arriba
					if (previous->first == 'V')
						return false;
				}
				if(previous->second == current->second)
					sameNumberInARow = true;
				else
					sameNumberInARow = false;
			}
			current = repeatableNumbers.find(c);
			if (current->second <= 0)
				return false;
			previousNumber = c;
			current->second = current->second - 1;

	}
	return result;
}

