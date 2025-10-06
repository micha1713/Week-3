// project 12b.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Schrijf een programma wat het getal van euler benadert. ?? = 1 + 1
//1!+ 1
//2!+ 1
//3!+ ? 1
//??!
//Vraag de gebruiker om n.

#include <stdio.h>

int main() {
    int n, i, j;
    double e = 1.0, fac;

    printf_s("Geef een getal n: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        fac = 1.0;
        for (j = 1; j <= i; j++) {
            fac *= j;
        }
        e += 1.0 / fac;
    }

    printf_s("Benadering van e met %d termen is: %.10f\n", n, e);

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
