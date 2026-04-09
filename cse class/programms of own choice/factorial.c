#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; //log long is used so that it can run for bigger no.s also.

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;}

    printf("Factorial=%lld",fact);

    return 0;
}