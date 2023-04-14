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
