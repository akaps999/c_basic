#include <stdio.h>

//1~10까지 반복하면서 짝수면 짝수출력 홀수면 홀수 출력하는 코드 작성

//짝수 판별법: 2로 나눠서 나머지가 0이면 짝수
int main(void) {

    for(int i=1; i<=10; i++) {
        // if(0) → False
        // if(1) → True
        if(i % 2 == 0) { // == 0 을 지우면 0이 남을 때 홀수로 판별됨
            printf("짝수\n");
        } else {
            printf("홀수\n");
        }
    }
}