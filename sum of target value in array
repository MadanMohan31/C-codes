/*This code is to get the indices of the two number which add up and give the value of target entered*/

/*ex. input : num[] = [1,2,3,4,5]      target = 6
			output: [1,3]
			
			even here by adding the 3 twice we get 6, but we should not use the same indice position [2,2] twice*/
			
			


#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[20],target;
    int i,j,n,flag=0;
    printf("enter the size of the array : ");
    scanf("%d",&n);
		
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\n");
    printf("enter the target ====== ");
    scanf("%d",&target);       //we enter the target value as a result of sum.
		
		/*from here we read the array twice and add the number. once we get the two number which obtain the sum as target value,
		  we read those indices and print it.*/
		
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i!=j && a[i]+a[j]==target)
            {
                printf("[%d,%d]",i,j);
            }
        }
    }
}
