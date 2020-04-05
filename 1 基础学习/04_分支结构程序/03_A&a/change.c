#include<stdio.h>

/*
void change(char character)
{
    if(character>='a'&&character<='z')
        printf("%c\n",character);
    else if(character>='A'&&character<='Z')
    {
        character = character + 32;
        printf("%c\n",character);
    }

}
*/

void change(char character)
{
    character = character>='a'&&character<='z' ? character + 0 : character + 32;
    printf("%c\n",character);
}

void main()
{
    char character;
    character = getchar();
    change(character);
}
