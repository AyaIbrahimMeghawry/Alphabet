#include <stdio.h>
#include <stdlib.h>

int main()
{
    // check if the user enter an Alphabet and if it is Uppercase or Lowercase
    char ch;
    printf("Enter the character :\n");
    scanf("%c",&ch);
    if ( ((ch >= 'A')&&(ch <='Z')) || ((ch>='a')&&(ch <='z')))
{
    if((ch >= 'A')&&(ch <= 'Z'))
        {
            printf("The character is Alphabet and Uppercase \n ");

        }
        else
        {
            printf("The character is Alphabet and Lowercase \n ");
        }
    }

    else
    {
        printf("The character is not Alphabet !!\n ");
    }
    return 0;
}
