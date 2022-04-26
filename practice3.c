// Write a program that prints all prime numbers.
#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter the number :");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++)
    {int factor=0;
        for (int j = 2; j <= n; j++)
        {
           if (i%j==0)
           {
               factor++;
               
           
           }
           
        }
        if(factor==1){
          printf("%d\n", i);
        }
       
    }
}