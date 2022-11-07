#include <stdio.h>

int main(void) {
    int sum = 0;  // 총합을 누적 시킴

    //작성해보세요. (for문 활용)
    //1~10까지 값이 1씩 증가! i대체!
    //for문 활용해서 1~10까지 값을 덧셈하는 코드작성
    for(int i=1; i<=10; i++) {
        sum = sum + i;
        // sum += i;
    }
    printf("누적 총합: %d\n", sum);
}

// 위에서 for(int i=1; i<=10; i++) 일때, i=4 sum 값은 9가 된다.