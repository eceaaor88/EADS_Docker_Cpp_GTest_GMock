# EADS_Docker_Cpp_GTest_GMock
Run Google Test and Google Mock testing for C++ using a docker image.


*Docker pull command:

docker pull eceaaor77/eads_ubuntu_cpp_gtest_gmock

*Github repository clone command:

git clone https://github.com/eceaaor88/EADS_Docker_Cpp_GTest_GMock.git

*Execution command (you should run it on EADS_Docker_Cpp_GTest_GMock/RomanNumbers folder):

sudo docker run -v $PWD:/home/gtestProject eceaaor77/eads_ubuntu_cpp_gtest_gmock /bin/bash -c "cd /home/gtestProject  && cmake . && make && ./RomanNumbers > gtest_output.txt"
