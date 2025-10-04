// opdracht 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main() {
    float cijfer, som = 0.0, gemiddelde;
    int i;

    for (i = 0; i < 6; i++) {
        printf_s("Geef cijfer %d: ", i + 1);
        scanf_s("%f", &cijfer);
        som += cijfer;
    }

    gemiddelde = som / 6.0;

    if (gemiddelde >= 5.5) {
        printf_s("Gemiddelde: %.2f - Voldoende\n", gemiddelde);
    }
    else {
        printf_s("Gemiddelde: %.2f - Onvoldoende\n", gemiddelde);
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
