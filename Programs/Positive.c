//Check whether a number is positive or negative

#include<stdio.h>

int main()
{
    int num = 10;

    if(num > 0)
    {
        printf("the number is positive and greater than 0");
    }
    else if(num == 0)
    {
        printf("the number is positive and equal to 0");
    }
    else
    {
        printf("the number is negative");
    }
    return 0;
}
