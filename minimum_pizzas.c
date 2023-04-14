/*

Each pizza consists of 
4
4 slices. There are 
�
N friends and each friend needs exactly 
�
X slices.

Find the minimum number of pizzas they should order to satisfy their appetite.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two integers 
�
N and 
�
X, the number of friends and the number of slices each friend wants respectively.
Output Format
For each test case, output the minimum number of pizzas required.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test, i, fri, slice;
    scanf("%d",&test);
    if(test>0 && test<=100)
    {
        for(i=0;i<test;i++)
        {
            scanf("%d %d",&fri,&slice);
            int total=0, ans=0;
            if(fri>0 && slice<=10)
            {
                total = fri*slice;
                ans = total/4;
                if(total%4!=0)
                {
                    ans++;
                }
                printf("%d\n",ans);
            }

        }
    }

    return 0;
}


