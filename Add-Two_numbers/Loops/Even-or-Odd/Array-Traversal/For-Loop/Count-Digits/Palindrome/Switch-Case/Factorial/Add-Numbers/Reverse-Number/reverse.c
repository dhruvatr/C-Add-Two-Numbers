#include<stdio.h>
 int main() {
    int n = 5648
    int rev = 0;

    while(n != 0){
        rev = rev * 10 + (n % 10);
        n = n / 10;

    }

    printf("Reversed Number = %d", rev);
    return 0;
 }