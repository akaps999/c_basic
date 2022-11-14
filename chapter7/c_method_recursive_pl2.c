#include <stdio.h>

int f(int n);
int main(void) { 
    int result;
    result = f(123); 
    printf("%d\n", result);
}
int f(int n) {
    if(n>0)
        return n % 10 + f(n / 10);
    else
        return 0;
}

/**
 * result = f(123)
 * 123 % 10 + f(123/10)
 * 3 + f(12)
 * 12 % 10 + f(12/10)
 * 2 + f(1)
 * 1 % 10 + f(1/10)
 * 1 
 * 1 + f(0)
 * return = 0 == f(0)
*/