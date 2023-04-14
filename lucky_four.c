/*

Read problems statements in Mandarin Chinese and Russian.

You are given a list of T integers, for each of them you have to calculate the number of occurrences of the digit 4 in the decimal representation.

Input
The first line of input consists of a single integer T, denoting the number of integers in the list.

Then, there are T lines, each of them contain a single integer from the list.

Output
Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the respective integer from the list.

*/

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
