#include<stdio.h>


int max(int x,int y)
{
    if(x>y)
        return x;
    else if(x<y)
        return y;
    else
        return -1;
}


int main()
{
    int x,y,z;
    printf("please input two numbers:\n");
    scanf("%d%d",&x,&y);
    z = max(x,y);
    printf("maxmum = %d\n",z);
}
