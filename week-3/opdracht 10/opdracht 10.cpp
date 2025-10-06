// opdracht 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    int G, I, P = 1;

    printf_s("Geef een geheel getal: ");
    scanf_s("%d", &G);

    if (G <= 1) {
        P = 0;
    }
    else {
        for (I = 2; I <= G / 2; I++) {
            if (G % I == 0) {
                P = 0;
                break;
            }
        }
    }

    if (P == 1) {
        printf_s("%d is een priemgetal.\n", G);
    }
    else {
        printf_s("%d is geen priemgetal.\n", G);
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
