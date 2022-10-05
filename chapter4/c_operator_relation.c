#include <stdio.h>

int main(void) {
    int a = 10, b = 20, c = 10;
    int res;

    res = ( a > b );
    printf("a > b : %d\n", res);
    res = ( a >= b );
    printf("a >= b : %d\n", res);
    res = ( a < b );
    printf("a < b : %d\n", res);
    res = ( a <= c );
    printf("a <= c : %d\n", res);
    res = ( a == b );
    printf("a == b : %d\n", res);
    res = ( a != c ); // !는 서로 같지 않음을 의미
    printf("a != c : %d\n", res);
}
