#include<stdio.h>

int exchange(int a)
{
    a = a - 32;
    return a;
}

void main()
{
    char a,b;
    printf("请输入小写字母\n");
    scanf("%c",&a);
    b = exchange(a);
    printf("对应的大写字母分别是%c",b);
}
