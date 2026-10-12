#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    SetConsoleOutputCP(65001);
    int A, B, C;

    printf("Введите значение энергии трех кристаллов (A B C): ");
    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        return 1;
    }

    if ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0)) {
        printf("Портал открыт!\n");
    }
    else {
        printf("Портал закрыт.\n");
    }

    return 0;
}
