#include <stdio.h>
int main() {
    int n = 123, sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}
