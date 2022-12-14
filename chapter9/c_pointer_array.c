#include <stdio.h>

// - 객관식, 주관식, OX, 빈칸채우기, 서술형(1문제)

/**
 * 포인터(parameter)와 배열(array)
*/

int main(void) {
    int ary[3]; //배열 선언(3칸) 크기: 12byte
    int i;      //변수           크기: 4byte

    // 배열 이름 → 배열의 시작번지 값을 담고있음
    
    *(ary + 0) = 10;                // ary 100번지
    *(ary + 1) = *(ary + 0) + 10;   // ary + 1 = 100번지 + 4 byte

    puts("3번째 배열 요소 입력: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d", *(ary+i));
    }
}