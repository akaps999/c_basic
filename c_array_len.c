#include <stdio.h>

//배열은 값을 여러개 담음 → 전체 출력 → 반복문(for) 시험제출 ★★★
int main(void) {
    int score[5];  // index 0~4
    int total =0;
    double avg;

    // 배열 길이(len) 계산
    // sizeof() → ()안의 값의 메모리 크기(Byte크기)
    // int → 4Byte
    // score → 20 Byte, score[0] → 4 Byte
    // 20 / 4 = 5 → 배열의 길이 또는 갯수

    array_count = sizeof(score) / sizeof(score[0]);
    for(int i=0; i<array_count; i++) {
        printf("%d: ", i+1);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<array_count; i++) {
        total += score[1];
    }
    avg = total / 5.0;
    printf("평균점수: %.1lf", avg);

}