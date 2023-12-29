#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define SIZE 10

int main() {
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));

    int d[SIZE];

    for (int i = 0; i < SIZE; i++) {
        d[i] = rand() % 100;
    }

    printf("Елементи масиву: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", d[i]);
    }

    printf("\nЕлементи масиву в зворотньому порядку: ");
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d ", d[i]);
    }

    return 0;
}