#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
/*
Користувач задає послідовність чисел. Написати рекурсивну функцію
виведення всіх чисел, розташованих до першого від’ємного числа.
І варіант послідовність не зберігається.
*/

void print();

int main(void) {
    print();
    return 0;
}

void print() {
    int input;
    scanf("%d", &input);
    if (input < 0) {
        return;
    }
    printf("%d ", input);
    print();
}
