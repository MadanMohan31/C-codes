/*

Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be 
X °F.

A person is said to have fever if his body temperature is strictly greater than 
98
98 °F.

Determine if Chef has fever or not.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,temp,i;
    scanf("%d",&n);

    if(n>0 && n<=10)
    {

        for(i=0;i<n;i++)
        {

            scanf("%d",&temp);
            if(temp>=94 && temp<=103)
            {

                if(temp>98)
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
