#include <stdio.h>

/**
 * ������ ���� ��Ģ
 *  - �����ʹ� ����Ű�� ������ ���°� ���� ���� ����
 *  - 
*/

int main (void) {
    int a =10;      // a(100����)
    int *p = &a;    // p(100����)
    double *pd;     // pd(�ּ�)
    // pd = p; (x)
    printf("%lf\n", *pd);
}