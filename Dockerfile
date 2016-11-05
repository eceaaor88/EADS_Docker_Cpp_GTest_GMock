FROM ubuntu:latest
MAINTAINER  ECEAAOR

RUN apt-get update -y
RUN apt-get install -y build-essential cmake make gcc libgtest-dev google-mock git
WORKDIR /usr/src/gtest
RUN cmake .
RUN make
RUN mv libg* /usr/lib/
RUN git clone --branch release-1.7.0 https://github.com/google/googlemock.git
RUN git clone --branch release-1.7.0 https://github.com/google/googletest.git
RUN mv googletest gtest
WORKDIR googlemock
RUN cmake .
RUN make
RUN mv libg* /usr/lib/
RUN cp -r ./include/gmock /usr/include/gmock
