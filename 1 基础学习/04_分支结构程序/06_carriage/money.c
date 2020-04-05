#include<stdio.h>

void cal_money(float s,float p,float w)
{

    float d,f;

    int k;

    if(s<250) k=1;
    if(s>=250 && s<500) k=2;
    if(s>=500 && s<1000) k=3;
    if(s>=1000 && s<2000) k=4;
    if(s>=2000 && s <3000) k=5;
    if(s>=3000) k=6;


    switch(k)
    {
        case 1:
            d = 0;
            break;
        case 2:
            d = 0.02;
            break;
        case 3:
            d = 0.05;
            break;
        case 4:
            d = 0.08;
            break;
        case 5:
            d = 0.10;
            break;
        case 6:
            d = 0.15;
            break;
    }

    f = p*w*s*(1-d);
    printf("%f\n",f);

}

void main()
{
    float p,w,d,f,s;

    printf("please input journey (km):\n");
    scanf("%f",&s);

    printf("please input price per unit(yuan):\n");
    scanf("%f",&p);

    printf("please input weight(kg):\n");
    scanf("%f",&w);

    cal_money(s,p,w);
}
