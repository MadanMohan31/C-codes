/*

Write a program which prints small/large/equal relation of given two integers a and b.

Input
Two integers a and b separated by a single space are given in a line.

Output
For given two integers a and b, print

a < b
if a is less than b,

a > b
if a is greater than b, and

a == b
if a equals to b.

*/

#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d",&num1);
    scanf("%d",&num2);
    if(num1<num2){
        printf("a < b\n");
    }
    else if(num1>num2){
        printf("a > b\n");
    }
    else if(num1==num2){
        printf("a == b\n");
    }
    
    
    return 0;
}
