
#include<stdio.h>

char do_range(int score)
{
    char range;
    if(score<60)
        range = 'E';
    else if(60<=score&&score<70)
        range = 'D';
    else if(75<=score&&score<80)
        range = 'C';
    else if(80<=score&&score<90)
        range = 'B';
    else if(90<=score)
        range = 'A';

    printf("%c\n",range);
}

void main()
{
    int score;
    printf("please input the score:\n");
    scanf("%d",&score);

    do_range(score);
}
