#include<stdio.h>

void main()
{
    float a,b,val;
    char c;
    printf("a+(-,*,/)b\n");
    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
        case '+':
            {
                val = a + b;
                printf("%f\n",val);
                break;
            }
        case '-':
            {
                val = a - b;
                printf("%f\n",val);
                break;
            }
        case '*':
            {
                val = a * b;
                printf("%f\n",val);
                break;
            }
        case '/':
            {
                val = a / b;
                printf("%f\n",val);
                break;
            }
    }
}
