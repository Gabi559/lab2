//
// Created by sando on 01/03/2022.
//
#include <iostream>
#include "array-manipulation.h"
#include "basic-functions.h"

void readArray(int* x, int &n){
    std::cout << "Introduceti lungimea sirului: \n"; n = read();
    std::cout << "Urmeaza citirea sirului... \n";
    for (int i = 0; i < n; i++){
        x[i] = read();
    }
}

void printArray(const int* x, int start, int end){
    bool first = true;
    for(int i=start; i<end; i++){
        std::cout << (first ? "" : ", ") << x[i];
        first = false;
    }
    std::cout << "\n";
}

seq longestInIntervalSequence(const int* x, int n, int a, int b){
    int maxIdx = 0, maxLen = 0, currLen = 0, currIdx = 0;

    for (int k = 0; k < n; k++) {
        if (x[k] >= a && x[k] <= b) {
            currLen++;
            if (currLen == 1)
                currIdx = k;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxIdx = currIdx;
            }
            currLen = 0;
        }
        if (currLen > maxLen && k == n - 1) {
            maxLen = currLen;
            maxIdx = currIdx;
        }
    }
    seq s{
            maxIdx, maxIdx + maxLen
    };
    return s;
}

seq longestPrimeSequence(const int* x, int n) {
    int maxIdx = 0, maxLen = 0, currLen = 0, currIdx = 0;

    for (int k = 0; k < n; k++) {
        if (isPrime(x[k])) {
            currLen++;
            if (currLen == 1)
                currIdx = k;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxIdx = currIdx;
            }
            currLen = 0;
        }
        if (currLen > maxLen && k == n - 1) {
            maxLen = currLen;
            maxIdx = currIdx;
        }
    }
        seq s{
                maxIdx, maxIdx + maxLen
        };
        return s;
    }

void printSequence(const int x[], seq s){
    if (s.start != s.end){
        std::cout << "Secventa este: ";
        printArray(x,s.start, s.end);
    }
    else {
        std::cout << "Nu a fost gasita secventa.\n";
    }
}
