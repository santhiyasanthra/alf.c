#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf(" ALPHABET.");
    }
    else
    {
        printf("NOT ALPHABET.");
    }

    return 0;
}
