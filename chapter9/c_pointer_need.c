#include <stdio.h>

/**
 * 포인터를 사용하는 이유
 *  - 변수를 사용하는 가장 쉬운 방법은 변수이름 호출
 *    (int num = 4;  → num)
 *  - 포인터 사용 → 추가적으로 변수선언, 주소연산, 간접참조 등 각종연산 수행해야함 (불편)
 *  - 포인터를 즐겨 사용할 필요 없음!
 *  - 임베디드 프로그래밍 할 때 메모리에 직접 전근하는 경우 또는 동적 할당 메모리를 사용하는 경우에는 포인터가 반드시 필요함   
 */

void swap(int *pa, int *pb);

int main(void) { 
    int a = 10, b = 20;
    int temp;

    /**
     *  함수의 매개변수(parameter) 전달 할 때 방법 3가지
     *  1. call by value : (c언어)값을 복사 전달!
     *  2. call by reference : (java)값이 위치한 주소를 전달!
     *  3. call by assignment : (python)자료형에 따라 1, 2를 섞어서 사용
    */

    // 포인터 : 다수의 함수 내에서 값을 공유
    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
}

/**
 * 교환(swap)작업은 swap()함수 내에서 포인터를 통해 진행되지만 실제로 바뀌는 값은 main()함수의 변수 a와b
 * swap()함수는 포인터를 통해 math()함수의 변수 a,b를 공유 (두 변수를 직접 바꾸는 일 가능)
 * → c언어가 call bt value기 때문에 포인터를 사용하지 않고 값을 전달하면 값이 copy돼서 전달되기 때문에 공유 불가!
*/

void swap(int *pa, int *pb) {
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    // a값이 20, b값이 10으로 바뀜, call by value 때문에 서로 바꾸려면 이 작업 거쳐야 함.
}