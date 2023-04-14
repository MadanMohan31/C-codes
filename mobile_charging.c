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
