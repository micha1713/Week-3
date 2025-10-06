// opdracht 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    int jaar;

    printf_s("Voer een jaartal in (1 - 2000): ");
    scanf_s("%d", &jaar);

    if (jaar < 1 || jaar > 2000) {
        printf_s("Ongeldig jaartal.\n");
        return 0;
    }

    printf_s("Romeins getal: ");

    while (jaar >= 1000) { printf_s("M"); jaar -= 1000; }
    if (jaar >= 900) { printf_s("CM"); jaar -= 900; }
    if (jaar >= 500) { printf_s("D"); jaar -= 500; }
    if (jaar >= 400) { printf_s("CD"); jaar -= 400; }
    while (jaar >= 100) { printf_s("C"); jaar -= 100; }
    if (jaar >= 90) { printf_s("XC"); jaar -= 90; }
    if (jaar >= 50) { printf_s("L"); jaar -= 50; }
    if (jaar >= 40) { printf_s("XL"); jaar -= 40; }
    while (jaar >= 10) { printf_s("X"); jaar -= 10; }
    if (jaar >= 9) { printf_s("IX"); jaar -= 9; }
    if (jaar >= 5) { printf_s("V"); jaar -= 5; }
    if (jaar >= 4) { printf_s("IV"); jaar -= 4; }
    while (jaar >= 1) { printf_s("I"); jaar -= 1; }

    printf_s("\n");
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
