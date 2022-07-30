//C program to generate sum of n natural numbers

#include<stdio.h>
int main()
{
    int number, i , sum = 0;
    printf("Kindly enter the number :\n");
    scanf("%d", &number);

    for(i = 1 ; i < number ; i++)
    {
        sum += i;
    }
    printf("Sum of %d numbers is %d",number, sum);
    return 0 ;
}
