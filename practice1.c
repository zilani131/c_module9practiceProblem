// Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
#include<stdio.h>
int main()
{  int n,sum=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++)
    {
        sum+=i;
    }
    printf("1 to %d sum is %d",n,sum);
    return 0;

}