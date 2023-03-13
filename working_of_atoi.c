#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str[100];
    static int val;
    printf("Enter the string : ");
    scanf("%s",str);
    
    /*atoi only extracts the initial numbers of the sequence.
      Ex. atoi(123abc456de78) = 123
      Ex. atoi(abc123de45) = 0*/
    
    val = atoi(str);
    printf("The value from %s is %d",str,val);
}
