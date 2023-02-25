#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num,n=0,sum=0,ans=0;
    printf("enter the number  :  ");
    scanf("%d",&num);
    
    /*this while loop is used to do the calculations required to add the number sequence.*/
    
    while(num>0)
    {
        
        /*we extract the last digit of the sequence by % operator and add it to the ans.*/
        /*later we upload the num by eliminating the last number of the sequence.*/
        
        n = num%10;
        ans = ans+n;
        num = num/10;
    }
    printf("\n");
    printf("the sum of the given sequence is ==== %d\n",ans);
}
