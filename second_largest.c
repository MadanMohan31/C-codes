#include<stdio.h>
int main()
{
    int t,i;
    long int a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
   
   
    
    scanf("%ld %ld %ld",&a,&b,&c);
    if((a>b&&a<c )|| (a<b&&a>c)){
        printf("%ld\n",a);
    }
    else if((b>a&&b<c )|| (b<a&&b>c)){
        printf("%ld\n",b);
    }
    else{
        printf("%ld\n",c);
    }
}
    
    return 0;
}
