// opdracht 8.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>

int main() {
    double saldo;
    double rente;
    int jaren;

    printf_s("voer het begisaldo in: ");
    scanf_s("%lf", &saldo);

    printf_s("voer het jaarlijkse rentepercentage in: ");
    scanf_s("%lf", &rente);

    printf_s("voer het aantal jaren in: ");
    scanf_s("%d", &jaren);

    printf_s("\nJaar\tSaldo\n");


    for (int i = 1; i <= jaren; i++) {
        saldo = saldo + saldo * (rente / 100.0);
        printf_s("%d\t%.2lf\n", i, saldo);
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
