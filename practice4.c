// 4. Write a program that prints the next 20 leap years.
#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter the numbers of leap year wants to show : ");
    scanf("%d",&n);
  
       int i=2020;
        { while (1)
         {  
             if (i%400==0 || (i%4==0&&i%100!=0))
            {
               
               a++;
               printf("%d a=%d\n",i,a);
            }
            if (a>=n)
            {
               break;
            }
            i+=2;
        }       
           
        }
          
}