#include <stdio.h>

// - ������, �ְ���, OX, ��ĭä���, ������(1����)

/**
 * ������(parameter)�� �迭(array)
*/

int main(void) {
    int ary[3]; //�迭 ����(3ĭ) ũ��: 12byte
    int i;      //����           ũ��: 4byte

    // �迭 �̸� �� �迭�� ���۹��� ���� �������
    
    *(ary + 0) = 10;                // ary 100����
    *(ary + 1) = *(ary + 0) + 10;   // ary + 1 = 100���� + 4 byte

    puts("3��° �迭 ��� �Է�: ");
    scanf("%d", ary + 2);

    for(i=0; i<3; i++) {
        printf("%d", *(ary+i));
    }
}