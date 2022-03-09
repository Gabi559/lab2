//
// Created by sando on 01/03/2022.
//
#include <cassert>
#include "../modules/basic-functions.h"
#include "../modules/array-manipulation.h"
#include "tests.h"
#include "../definitions/definitions.h"

void testLongestPrimeSequence(){
    int x[4]={0,2,3,4};
    seq s = longestPrimeSequence(x, 4);
    assert(s.start == 1);
    assert(s.end == 3);
    int y[8]={0, 2, 3, 5, 4, 3, 3, 2};
    seq t = longestPrimeSequence(y, 8);
    assert(t.start == 1);
    assert(t.end == 4);
}

void testLongestInIntervalSequence(){
    int x[5]={0,1,3,5, 4};
    seq s = longestInIntervalSequence(x, 5, 3, 6);
    assert(s.start == 2);
    assert(s.end == 5);
    int y[6]={0, 3, 4, 5, 7, 7};
    seq t = longestInIntervalSequence(y,6, 3, 5);
    assert(t.start==1);
    assert(t.end==4);
}

void testPrime(){
    assert(isPrime(3)==true);
    assert(isPrime(0)==false);
    assert(isPrime(4)==false);
}

void allTests(){
    testPrime();
    testLongestPrimeSequence();
    testLongestInIntervalSequence();
}