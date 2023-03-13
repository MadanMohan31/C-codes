/*This code is to find out whether the array is even or odd.
  here the array is said to be even if the even position of the array contains only even numbers.
  ex. array[]  0  1  2  3  4  5  6
      items    2  7  4  5  6  3  8
      
      here array[0] = 2, even position has even number.
           array[2] = 4, even position has even number.
           and so on......
           
      so these types of arrays are said to be even. if not the array is odd*/



#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[20];
    int n,i,flag=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    
    /*we read the size of the array by 'n' and by using for we assign the a[] values.*/
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        /*the below if statement has the formula for obtaining the required condition*/
        
        if((i%2==0 && a[i]%2==0) && ((i-1)%2!=0 && a[i-1]%2!=0))
        {
            flag=1;  //if even, flag will be 1
        }
        else
        {
            flag=0;  //if odd, flag will be 0
        }
    }
    if(flag==1)
    {
        printf("even array\n");
    }
    else
    {
        printf("odd array\n");
    }
}
