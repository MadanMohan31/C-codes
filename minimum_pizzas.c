#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test, i, fri, slice;
    scanf("%d",&test);
    if(test>0 && test<=100)
    {
        for(i=0;i<test;i++)
        {
            scanf("%d %d",&fri,&slice);
            int total=0, ans=0;
            if(fri>0 && slice<=10)
            {
                total = fri*slice;
                ans = total/4;
                if(total%4!=0)
                {
                    ans++;
                }
                printf("%d\n",ans);
            }

        }
    }

    return 0;
}


