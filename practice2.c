// Write a program that asks the user for a number n and only multiples of three or five are
// considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17
#include<stdio.h>
int main(){

    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
    //   if (i%3!=0&&i%5!=0) 
       
      //giving and because if we think 12 it is divisible by 3 by not 5 
    //   for 12 its remainder is 0 when divisible is 3 but when divisible is 5 its remainder not 0
    // so as one remainder is 0 so it is false for the condition but if we use or(||) than the total 
    // condition will be true because of divisor 5 
    if (i%3&&i%5) 
    //when the value is true than enter and it will be true when ther 
    // is remainder because if remainder is zero than it means false
      {
         continue;
      }
      printf("%d\n",i);
      sum+=i;
    }
 printf("sum is %d",sum)   ;
}