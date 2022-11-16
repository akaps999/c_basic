#include <stdio.h>

int main(void) {
    int result;
    result = func(19);
    printf("Result = %d\n", result);
    }

    int func(int n) {                  //func(19)
        if(n % 2 == 1) n = n-1;        // func(18)
        if(n == 0) return 0;
        return (func(n-2)+n);          // n = 18, func(16) + 18
    }

    /**
     *  n = 18, func(16) + 18
     *  n = 16, func(14) + 16
     *  n = 14, func(12) + 14
     *  n = 12, func(10) + 12
     *  n = 10, func(8) + 10
     *  n = 8, func(6) + 8
     *  n = 6, func(4) + 6
     *  n = 4, func(2) + 4
     *  n = 2, func(0) + 2
    */