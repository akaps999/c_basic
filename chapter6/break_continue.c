#include <stdio.h>

/**
 *  Break & continue 문
 *  - 반복문에서 주로 사용
 * 
 *  - break: 즉시 반복문을 빠져나가라
 *           → 이후로 반복문 실행 x
 * 
 *  - continue: 즉시 다음 반복으로 넘어가라
 *           → 이후로 반복문 실행 o
 * 
 * 
*/

int main(void) {
    for(int i=1; i<=10; i++) {
        if(i % 2 == 0) {
            continue; // 짝수가 continue에 들어가면 밑 출력 단계로 안내려가고 바로 다음 숫자로 넘어감
        }
        if(i == 7){
            break; // 7에서 바로 나가기 때문에 출력 단계로 가지 않음
        }
        printf("%d\n", i);
    }
}