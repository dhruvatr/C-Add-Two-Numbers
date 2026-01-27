#include<stdio.h>
int main() {
    int i, fact = 1, n = 5;

    for(i = 1; i <= 5; i++)
    fact = fact * i;

    printf("Facrorial = %d", fact);
    return 0;

}