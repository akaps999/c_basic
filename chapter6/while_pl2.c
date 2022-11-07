#include <stdio.h>

// 1~100 짝수 총합, 홀수 총합을 계산
int main(void){
    int even_total = 0;
    int odd_total = 0;

        // for문
        for(int i=1; i<=100; i++) {
            if(i % 2 == 0) {
                even_total += i;
            } else {
                odd_total += i;
            }
        } 
    }

//while 문
        int num = 1;
        while(num <= 100) {
            if(num % 2 == 0) {
                even_total += num;
            } else {
                odd_total += num;
            }
            num++; // 위로 올라가면 답이 달라짐
        }