//C program to generate the fibonacci series
#include<stdio.h>
int main()
{
    int num1 = 0, num2 = 1;
    int n = 8;

    printf("%d\t%d\t", num1,num2);
    int nextTerm;

    for(int i = 2 ; i < n ; i++)
    {
        nextTerm = num1 + num2;
        num1 = num2;
        num2 = nextTerm;
        printf("%d\t", nextTerm);
    }
    return 0;
}
