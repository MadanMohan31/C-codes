/*

Alice buys a toy with a selling price of 
100
100 rupees. There is a discount of 
�
x percent on the toy. Find the amount Alice needs to pay for it.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case contains a single integer, 
�
x — the discount on the toy.
Output Format
For each test case, output on a new line the price that Alice needs to pay.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int test,dis,i;
    scanf("%d",&test);
    if(test>0 && test<=100)
    {
        for(i=0;i<test;i++)
        {
            scanf("%d",&dis);
            if(dis>=0 && dis<=100)
            {
                printf("%d\n",100-dis);
            }
        }
    }

    return 0;
}
