/*

Chef is looking to buy a TV and has shortlisted two models. The first one costs 
�
A rupees, while the second one costs 
�
B rupees.

Since there is a huge sale coming up on Chefzon, Chef can get a flat discount of 
�
C rupees on the first TV, and a flat discount of 
�
D rupees on the second one.

Help Chef determine which of the two TVs would be cheaper to buy during the sale.

Input Format
The first line contains a single integer 
�
T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four space-separated integers 
�
A, 
�
B, 
�
C and 
�
D — the marked price (in rupees) of the first TV, the marked price (in rupees) of the second TV, the flat discount (in rupees) of the first TV, and the flat discount (in rupees) of the second TV.
Output Format
For each test case, print a single line containing the string First if the first TV is cheaper to buy with discount, or Second if the second TV is cheaper to buy with discount. If both of them cost the same after discount, print Any.

You may print each character of the string in uppercase or lowercase (for example, the strings first, First, fIRSt, and FIRST will all be treated as identical).

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    if(t>0 && t<=5000)
    {
        for(i=0;i<t;i++)
        {
            int tv1,tv2,dis1,dis2;
            scanf("%d %d %d %d",&tv1,&tv2,&dis1,&dis2);
            int price1,price2;
            price1 = tv1-dis1;
            price2 = tv2-dis2;
            if(price1<price2)
            {
                printf("First\n");
            }
            else if(price2<price1)
            {
                printf("Second\n");
            }
            else
            {
                printf("Any\n");
            }
        }
    }

    return 0;
}
