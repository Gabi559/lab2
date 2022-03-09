//
// Created by sando on 01/03/2022.
//
#include "../definitions/definitions.h"

#ifndef LAB2_ARRAY_MANIPULATION_H
#define LAB2_ARRAY_MANIPULATION_H

void readArray(int x[], int &n);
void printArray(const int* x, int start, int end);
seq longestInIntervalSequence(const int* x, int n, int a, int b);
seq longestPrimeSequence(const int* x, int n);
void printSequence(const int x[], seq s);
#endif //LAB2_ARRAY_MANIPULATION_H