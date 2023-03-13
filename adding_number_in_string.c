/*This code will extract the number from the entered string and add those number.*/
/*ex.    input : abc123def45gh6
         output : 21
         working : 1 + 2 + 3 + 4 + 5 + 6 = 21  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[20];
    int n,i,k,j=0,num[20],ans;
    printf("enter the string:");
    
    /*read the string containing both character and numbers*/
    
    scanf("%s",str);
    n = strlen(str);
    
    /*for loop is used for reading each and every character of the entered string*/
    
    for(i=0;i<n;i++)
    {
        
        /*if condition is design to read the numbers ranging from 0-9 */
        
        if(str[i]>='0' && str[i]<='9')
        {
            
            /*store every number present in the string in num[] */
            
            num[j] = str[i];
            j++;
        }
    }
    
    /*for is used to read the number in num[] and later we add those number to ans variable.
      here we subtract the number by 48 because, when string is converted into interger, it turns into ASCII value.
      to get the exact number, we substract he num[] by 48.*/
    
    for(k=0;k<j;k++)
    {
        //printf("%d\n",num[k]-48);
        ans = ans+(num[k]-48);
    }
    printf("count = %d\n",ans);
}
