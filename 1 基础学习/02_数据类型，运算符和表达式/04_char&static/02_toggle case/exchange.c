#include<stdio.h>

int exchange(int a)
{
    a = a - 32;
    return a;
}

void main()
{
    char a,b;
    printf("������Сд��ĸ\n");
    scanf("%c",&a);
    b = exchange(a);
    printf("��Ӧ�Ĵ�д��ĸ�ֱ���%c",b);
}
