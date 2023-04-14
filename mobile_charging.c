/*

Chef's phone shows a Battery Low notification if the battery level is 
15
%
15% or less.

Given that the battery level of Chef's phone is 
�
%
X%, determine whether it would show a Battery low notification.

Input Format
First line will contain 
�
T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, an integer 
�
X, denoting the battery level of the phone.
Output Format
For each test case, output in a single line 
Yes
Yes, if the battery level is 
15
%
15% or below. Otherwise, print 
No
No.

You may print each character of 
Yes
Yes and 
No
No in uppercase or lowercase (for example, 
YeS
YeS, 
YES
YES, 
yes
yes will be considered identical).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test, battery, i;
    scanf("%d",&test);
    if(test>0 && test<=100)
    {
        for(i=0;i<test;i++)
        {
            scanf("%d",&battery);
            if(battery>0 && battery<=100)
            {
                if(battery<=15)
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
