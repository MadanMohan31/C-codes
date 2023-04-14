/*

Write a program to take two numbers as input and print their difference if the first number is greater than the second number 
�
�
ℎ
�
�
�
�
�
�
otherwise print their sum.

Input Format
First line will contain the first number (
�
1
N1)
Second line will contain the second number (
�
2
N2)
Output Format
Output a single line containing the difference of 2 numbers 
(
�
1
−
�
2
)
(N1−N2) if the first number is greater than the second number otherwise output their sum 
(
�
1
+
�
2
)
(N1+N2).

*/

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
