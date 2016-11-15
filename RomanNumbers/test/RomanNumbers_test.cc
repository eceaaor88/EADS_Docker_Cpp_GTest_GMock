#include "../src/RomanNumbers.h"

#include "gmock/gmock.h"

TEST(RomanNumbersChecker,checkWrongValue) {

	ASSERT_EQ(false, RomanNumbersChecker("T"));
}

TEST(RomanNumbersChecker,checkValueI) {

	ASSERT_EQ(true, RomanNumbersChecker("I"));
}

TEST(RomanNumbersChecker,checkValueV) {
	ASSERT_EQ(true, RomanNumbersChecker("V"));
}

TEST(RomanNumbersChecker,checkValueX) {

	ASSERT_EQ(true, RomanNumbersChecker("X"));
}

TEST(RomanNumbersChecker,checkValueL) {

	ASSERT_EQ(true, RomanNumbersChecker("L"));
}

TEST(RomanNumbersChecker,checkValueC) {

	ASSERT_EQ(true, RomanNumbersChecker("C"));
}

TEST(RomanNumbersChecker,checkValueM) {

	ASSERT_EQ(true, RomanNumbersChecker("M"));
}

TEST(RomanNumbersChecker,checkRepetitionsI) {

	ASSERT_EQ(true, RomanNumbersChecker("III"));
}

TEST(RomanNumbersChecker,checkRepetitionsX) {

	ASSERT_EQ(true, RomanNumbersChecker("XXX"));
}

TEST(RomanNumbersChecker,checkRepetitionsC) {

	ASSERT_EQ(true, RomanNumbersChecker("CCC"));
}

TEST(RomanNumbersChecker,checkRepetitionsM) {

	ASSERT_EQ(true, RomanNumbersChecker("MMM"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsI) {

	ASSERT_EQ(false, RomanNumbersChecker("IIII"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsX) {

	ASSERT_EQ(false, RomanNumbersChecker("XXXX"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsC) {

	ASSERT_EQ(false, RomanNumbersChecker("CCCC"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsM) {

	ASSERT_EQ(false, RomanNumbersChecker("MMMM"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsV) {

	ASSERT_EQ(false, RomanNumbersChecker("VV"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsL) {

	ASSERT_EQ(false, RomanNumbersChecker("LL"));
}

TEST(RomanNumbersChecker,checkNoRepetitionsD) {

	ASSERT_EQ(false, RomanNumbersChecker("DD"));
}

TEST(RomanNumbersChecker,checkSubstractionIV) {

	ASSERT_EQ(true, RomanNumbersChecker("IV"));
}

TEST(RomanNumbersChecker,checkSubstractionIX) {

	ASSERT_EQ(true, RomanNumbersChecker("IX"));
}

TEST(RomanNumbersChecker,checkSubstractionXL) {

	ASSERT_EQ(true, RomanNumbersChecker("XL"));
}

TEST(RomanNumbersChecker,checkSubstractionXC) {

	ASSERT_EQ(true, RomanNumbersChecker("XC"));
}

TEST(RomanNumbersChecker,checkSubstractionCD) {

	ASSERT_EQ(true, RomanNumbersChecker("CD"));
}

TEST(RomanNumbersChecker,checkSubstractionCM) {

	ASSERT_EQ(true, RomanNumbersChecker("CM"));
}

TEST(RomanNumbersChecker,checkNoSubstractionIL) {

	ASSERT_EQ(false, RomanNumbersChecker("IL"));
}

TEST(RomanNumbersChecker,checkNoSubstractionIC) {

	ASSERT_EQ(false, RomanNumbersChecker("IC"));
}

TEST(RomanNumbersChecker,checkNoSubstractionIM) {

	ASSERT_EQ(false, RomanNumbersChecker("IM"));
}

TEST(RomanNumbersChecker,checkNoSubstractionXD) {

	ASSERT_EQ(false, RomanNumbersChecker("XD"));
}

TEST(RomanNumbersChecker,checkNoSubstractionXM) {

	ASSERT_EQ(false, RomanNumbersChecker("XM"));
}

TEST(RomanNumbersChecker,checkNoSubstractionIIV) {

	ASSERT_EQ(false, RomanNumbersChecker("IIV"));
}

TEST(RomanNumbersChecker,checkNoSubstractionIIX) {

	ASSERT_EQ(false, RomanNumbersChecker("IIX"));
}

TEST(RomanNumbersChecker,checkNoSubstractionXXL) {

	ASSERT_EQ(false, RomanNumbersChecker("XXL"));
}

TEST(RomanNumbersChecker,checkNoSubstractionXXC) {

	ASSERT_EQ(false, RomanNumbersChecker("XXC"));
}

TEST(RomanNumbersChecker,checkNoSubstractionCCD) {

	ASSERT_EQ(false, RomanNumbersChecker("CCD"));
}

TEST(RomanNumbersChecker,checkNoSubstractionCCM) {

	ASSERT_EQ(false, RomanNumbersChecker("CCM"));
}

TEST(RomanNumbersChecker,checkNoSubstractionVL) {

	ASSERT_EQ(false, RomanNumbersChecker("VL"));
}

TEST(RomanNumbersChecker,checkNoSubstractionLC) {

	ASSERT_EQ(false, RomanNumbersChecker("LC"));
}

TEST(RomanNumbersChecker,checkNoSubstractionDM) {

	ASSERT_EQ(false, RomanNumbersChecker("DM"));
}

TEST(RomanNumbersChecker,happyTest1) {

	ASSERT_EQ(true, RomanNumbersChecker("MDCCLIX"));
}

TEST(RomanNumbersChecker,happyTest2) {

	ASSERT_EQ(false, RomanNumbersChecker("MDCCCCLIX"));
}

TEST(RomanNumbersChecker,happyTest3) {

	ASSERT_EQ(false, RomanNumbersChecker("MDCLCLIX"));
}

TEST(RomanNumbersChecker,happyTest4) {

	ASSERT_EQ(false, RomanNumbersChecker("MDCCLIIX"));
}
