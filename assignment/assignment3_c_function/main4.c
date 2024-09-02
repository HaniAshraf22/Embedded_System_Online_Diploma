/*
 * main.c
 *
 *  Created on: Sep 2, 2024
 *      Author: First
 */
#include <stdio.h>

int power(int base, int exp) {
    if (exp != 0) {
        return base * power(base, exp - 1);
    } else {
        return 1;
    }
}

int main() {
    int base, exp;
    printf("Enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &base);
    printf("\nEnter power number(positive integer): ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &exp);
    printf("%d^%d = %d\n", base, exp, power(base, exp));

    return 0;
}


