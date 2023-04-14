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


