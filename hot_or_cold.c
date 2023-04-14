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
