//
// Created by sando on 01/03/2022.
//
#include <iostream>
#include "menu.h"
#include "../modules/basic-functions.h"
#include "../modules/array-manipulation.h"
#include "../definitions/definitions.h"

void showMenu(){
    std::cout << "--Main Menu--\n";
    std::cout << "Selecteaza una dintre urmatoarele:\n";
    std::cout << "1 - Citirea sirului\n";
    std::cout << "2 - Afisarea sirului\n";
    std::cout << "3 - Afisarea celei mai lungi secvente de numere prime\n";
    std::cout << "4 - Afisarea celei mai lungi secvente cu numere incluse intr-un interval [a,b]\n";
    std::cout << "0 - Iesire\n";
    std::cout << "Selectie: ";
}

void runMenu(){
    int* x= new int [100], n, choice;
    seq s{};
    do{
        showMenu();
        choice = read();
        switch(choice){
            case 1:
                readArray(x, n);
                break;
            case 2:
                std::cout << "Sirul este: ";
                printArray(x, 0, n);
                break;
            case 3:
                s = longestPrimeSequence(x, n);
                printSequence(x, s);
                break;
            case 4:
                int a, b;
                std::cout << "Introduceti intervalul [a,b]: \n";
                readInterval(a, b);
                if(a > b){
                    std::cout << "Interval invalid. \n";
                }
                else {
                    s = longestInIntervalSequence(x, n, a, b);
                    printSequence(x, s);
                }
                break;
            case 0:
                std::cout << "Iesire...";
                break;
            default:
                std::cout << "Optiune gresita, reincercati. \n";
                break;
        }
    } while(choice !=0);
    delete[] x;
}