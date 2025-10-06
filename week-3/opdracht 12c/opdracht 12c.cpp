// opdracht 12c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <stdio.h>

int main() {
    int n, i;
    double x, ex = 1.0, term = 1.0;

    printf_s("Geef een waarde voor x: ");
    scanf_s("%lf", &x);

    printf_s("Geef een waarde voor n: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        term = term * x / i;
        ex += term;
    }

    printf_s("Benadering van e^%.2f met %d termen is: %.10f\n", x, n, ex);

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
