/*

There are 
�
N children and Chef wants to give them 
1
1 candy each. Chef already has 
�
X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 
4
4 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 
1
1 candy to each of the 
�
N children.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case contains two integers 
�
N and 
�
X — the number of children and the number of candies Chef already has.
Output Format
For each test case, output the minimum number of candy packets Chef must buy so that he is able to give 
1
1 candy to each of the 
�
N children.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test, i, child, candy, total;
    scanf("%d",&test);
    if(test>0 && test<=1000)
    {
        for(i=0;i<test;i++)
        {
            scanf("%d %d",&child,&candy);
            child -= candy;
            if(child<0)
            {
                child = 0;
                printf("%d\n",child);
            }
            else
            {
                total = child/4;
                if(child%4!=0)
                {
                    total++;
                }
                printf("%d\n",total);
            }
        }
    }

    return 0;
}


