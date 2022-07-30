//check whether the alphabet is vowel or a consonant
#include<stdio.h>

int main()
{
    char c = 'a';
    if( c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
    {
        printf("the alphabet %c is a vowel", c);
    }
    else
    {
        printf("the alphabet %c is a consonant", c);
    }
    return 0;
}
