#include <stdio.h>
int main()
{
    int num = 0;

    //Condition to check if num is negative/positive or zero
    if (num >= 0)
    {
        if (num == 0)
            printf("The number is 0");
        else
            printf("The number is Positive");
    }
    else
        printf("The number is Negative");

    return 0;
}
