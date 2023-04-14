/*

Chef considers the climate HOT if the temperature is above 
20
20, otherwise he considers it COLD. You are given the temperature 
�
C, find whether the climate is HOT or COLD.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case contains a single integer, the temperature 
�
C.
Output Format
For each test case, print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int c;
        scanf("%d",&c);
        if(c>20)
        {
            printf("Hot\n");
        }
        else
        {
            printf("Cold\n");
        }
    }
    return 0;
}
