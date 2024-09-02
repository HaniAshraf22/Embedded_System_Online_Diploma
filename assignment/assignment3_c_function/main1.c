/*
 * main.c
 *
 *  Created on: Sep 2, 2024
 *      Author: First
 */
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void find_primes_between_intervals(int start, int end) {
    printf("\nPrime numbers between %d and %d are: ", start, end);
    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    printf("\nEnter the start of the interval: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &start);
    printf("\nEnter the end of the interval: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &end);
    find_primes_between_intervals(start, end);

    return 0;
}

