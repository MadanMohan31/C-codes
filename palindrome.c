/*This code is to check whether the number is palindrome or not*/



#include<stdio.h>
#include<stdlib.h>

void main()
{
    int num,temp;
    int r,sum=0;
    printf("enter the number : ");
    scanf("%d",&num);
    temp = num;
    
    /*here we enter the while loop when number is greater than 0
      the method is, in 'r' it extracts the last digit the sequence.
                     and add that last digit to the 'sum'.
                     later 'num' will be uploaded by eliminating the last digit.*/
                     
    
    
    /*ex. num = 121;   temp = num;
         
         r = 121%10 = 1
         sum = (0*10)+1 = 1
         num = 121/10 = 12
         
         r = 12%10 = 2
         sum = (1*10)+2 = 12
         num = 12/10 = 1
         
         r = 1%10 = 1
         sum = (12*10)+1 = 121
         num = 1/10 = 0
         
         therefore, 'num' is 0 and exits from while.
         
         now, temp = sum. so, palindrome.
    */
         
    
    while(num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
        //printf("%d = %d = %d\n",r,sum,num);
    }
    if(temp==sum)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
}
