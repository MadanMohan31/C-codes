/*

Chef has his lunch only between 
1
1 pm and 
4
4 pm (both inclusive).

Given that the current time is 
�
X pm, find out whether it is lunchtime for Chef.

Input Format
The first line of input will contain a single integer 
�
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, containing one integer 
�
X.
Output Format
For each test case, print in a single line 
YES
YES if it is lunchtime for Chef. Otherwise, print 
NO
NO.

You may print each character of the string in either uppercase or lowercase (for example, the strings 
YeS
YeS, 
yEs
yEs, 
yes
yes and 
YES
YES will all be treated as identical).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,time,i;
    scanf("%d",&n);

    if(n>0 && n<=12)
    {

        for(i=0;i<n;i++)
        {

            scanf("%d",&time);
            if(time>0 && time<=12)
            {

                if(time>=1 && time<=4)
                {
                    printf("Yes\n");
                }
                else
                {
                    printf("No\n");
                }

            }

        }

    }
    return 0;
}

