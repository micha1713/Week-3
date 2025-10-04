// opdracht 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    int I;
    int a = 0, b = 1, F = 0;

    printf_s("geef een index: ");
    scanf_s("%d", &I);

    if (I == 0) {
        F = 0;
    }
    else if (I == 1) {
        F = 1;
    }
    else {
        for (int i = 2; i <= I; i++) {
            F = a + b;
            a = b;
            b = F;
        }
    }

    printf_s("het fibonacci getal bij index %d is: %d\n", I, F);

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
