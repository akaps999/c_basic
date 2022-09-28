#include <stdio.h>

// scanf() 함수
//     + 키보드로부터 값을 입력

// 변수: 

int main(void) {

    int age;

    // age 호출 => 4값
    printf("%d", age);  // age 4

    printf("나이: ");
    scanf("%d", &age);  // age변수의 메모리 주소 (& 유무의 차이)
    
    printf("%d", age);  // age
}