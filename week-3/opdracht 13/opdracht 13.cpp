// opdracht 13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    int cijfer;

    printf_s("Voer een cijfer in (1-10): ");
    scanf_s("%d", &cijfer);

    switch (cijfer) {
    case 1:
        printf_s("Zwaar onvoldoende\n");
        break;
    case 2:
        printf_s("Onvoldoende\n");
        break;
    case 3:
        printf_s("Zeer matig\n");
        break;
    case 4:
        printf_s("Matig\n");
        break;
    case 5:
        printf_s("Bijna voldoende\n");
        break;
    case 6:
        printf_s("Voldoende\n");
        break;
    case 7:
        printf_s("Redelijk goed\n");
        break;
    case 8:
        printf_s("Goed\n");
        break;
    case 9:
        printf_s("Zeer goed\n");
        break;
    case 10:
        printf_s("Uitmuntend\n");
        break;
    default:
        printf_s("Geen geldig cijfer\n");
        break;
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
