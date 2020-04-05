#include<stdio.h>
#include<math.h>

float area_cal(float a,float b,float c)
{
    float s,cal;
    s = 1.0/2*(a+b+c);
    cal = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%f,b=%f,c=%f,s=%f",a,b,c,s);
    return cal;
}


void main()
{
    float a,b,c,area;
    scanf("%f,%f,%f",&a,&b,&c);
    area = area_cal(a,b,c);
    printf("area=%7.2f\n",area);
}
