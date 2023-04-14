#include<stdio.h>
int main()
{
    int t,i;
    int n,count,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
   scanf("%d",&n);
   while(n>0){
   k=n%10;
   if(k==4){
       count++;
   }
   n=n/10;
   }
   printf("%d\n",count);
   count=0;
  
    }
      return 0; 
   }
