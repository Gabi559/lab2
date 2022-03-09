//
// Created by sando on 01/03/2022.
//
#include <iostream>
#include "basic-functions.h"

bool first = true;

bool isPrime(int num){
    if (num<0 or num == 0 or num == 1) return false;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int read(){
    int x;
    std::cin >> x;
    return x;
}

int readIntervalLimit(){
    int num;
    first ? std::cout << "a = " : std::cout << "b = ";
    num = read();
    first = !first;
    return num;
}

void readInterval(int &a, int &b){
    a = readIntervalLimit();
    b = readIntervalLimit();
}