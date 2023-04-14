/*

Write a program, which takes an integer N and if the number is less than 10 then display "Thanks for helping Chef!" otherwise print "-1".

Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, output the given string or -1 depending on conditions, in a new line.

*/

#include<stdio.h>
int main()
{
    int t,i;
    int n;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
   scanf("%d",&n);
   if(n<10){
       printf("Thanks for helping Chef!\n"); 
   }
   else{
       printf("%d\n",(-1));
   }
    }
      return 0; 
   }
