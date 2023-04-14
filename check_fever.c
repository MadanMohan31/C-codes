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
