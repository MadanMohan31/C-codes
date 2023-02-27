/*The following code is for change the integer value to roman*/

/*ex. input : integer_val = 14
      output: roman_value = XIV*/
      
/*here the integre value of roman values are:
         I = 1
         V = 5
         X = 10
         L = 50
         C = 100
         D = 500
         M = 1000
         
         IV = 4
         IX = 9
         XL = 40
         XC = 90
         CD  400
         CM = 900
*/





#include <stdio.h>
#include <stdlib.h>

void main()
{
    int val;
    printf("enter the value : ");
    scanf("%d",&val);
    printf("the roman sequence is ==== ");
    
    
    /*Here we just create a while loop when the value is not NULL.
      and use else-if conditions to check the value and print the roman character.
      after printing the roman character we substract the 'val' by its particular condition value.*/
    
    
    while(val>0)
    {
        if(val>=1000)
        {
            printf("M");
            val = val-1000;
        }
        else if(val>=900)
        {
            printf("CM");
            val = val-900;
        }
        else if(val>=500)
        {
            printf("D");
            val = val-500;
        }
        else if(val>=400)
        {
            printf("CD");
            val = val-400;
        }
        else if(val>=100)
        {
            printf("C");
            val = val-100;
        }
        else if(val>=90)
        {
            printf("XC");
            val = val-90;
        }
        else if(val>=50)
        {
            printf("L");
            val = val-50;
        }
        else if(val>=40)
        {
            printf("XL");
            val = val-40;
        }
        else if(val>=10)
        {
            printf("X");
            val = val-10;
        }
        else if(val>=9)
        {
            printf("IX");
            val = val-9;
        }
        else if(val>=5)
        {
            printf("V");
            val = val-5;
        }
        else if(val>=4)
        {
            printf("IV");
            val = val-4;
        }
        else
        {
            printf("I");
            val = val-1;
        }
    }
    return 0;
}
