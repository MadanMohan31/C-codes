#include <stdio.h>
#include <stdlib.h>

int main()
{
    int full, half, diff;
    scanf("%d %d",&full,&half);
    if(half%2==0)
    {
        diff = half/2;
        int total = full-diff;
        printf("%d",total);
    }
    return 0;
}
