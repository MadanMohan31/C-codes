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
