#include <stdio.h>

//�迭�� ���� ������ ���� �� ��ü ��� �� �ݺ���(for) �������� �ڡڡ�
int main(void) {
    int score[5];  // index 0~4
    int total =0;
    double avg;

    // �迭 ����(len) ���
    // sizeof() �� ()���� ���� �޸� ũ��(Byteũ��)
    // int �� 4Byte
    // score �� 20 Byte, score[0] �� 4 Byte
    // 20 / 4 = 5 �� �迭�� ���� �Ǵ� ����

    array_count = sizeof(score) / sizeof(score[0]);
    for(int i=0; i<array_count; i++) {
        printf("%d: ", i+1);
        scanf("%d", &score[i]);
    }
    for(int i=0; i<array_count; i++) {
        total += score[1];
    }
    avg = total / 5.0;
    printf("�������: %.1lf", avg);

}