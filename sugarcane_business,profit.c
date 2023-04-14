/*

While Alice was drinking sugarcane juice, she started wondering about the following facts:

The juicer sells each glass of sugarcane juice for 
50
50 coins.
He spends 
20
%
20% of his total income on buying sugarcane.
He spends 
20
%
20% of his total income on buying salt and mint leaves.
He spends 
30
%
30% of his total income on shop rent.
Alice wonders, what is the juicer's profit (in coins) when he sells 
�
N glasses of sugarcane juice?

Input Format
The first line of input will contain an integer 
�
T — the number of test cases. The description of 
�
T test cases follows.
The first and only line of each test case contains an integer 
�
N, as described in the problem statement.
Output Format
For each test case, output on a new line the juicer's profit when he sells 
�
N glasses of juice.
    
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,i;
    scanf("%d",&test);
    if(test>0 && test<=1000)
    {
        for(i=0;i<test;i++)
        {
            int n;
            scanf("%d",&n);
            if(n>0 && n<=1000000)
            {
                int gain;
                gain = n*15;
                printf("%d\n",gain);
            }
        }
    }
    return 0;
}
