/*The following code is for change the roman value to interger value*/

/*ex. input : roman_value = XIV
      output: integer_val = 14*/
      
/*here the integre value of roman values are:
         I = 1
         V = 5
         X = 10
         L = 50
         C = 100
         D = 500
         M = 1000
*/





#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str[100];
    printf("enter the roman numerals : ");
    scanf("%s",str);
    printf("\n");
    printf("roman sequence is ==== %s\n",str);
    printf("\n\nthe integer value is = %d\n\n",roman_to_int(str));
}


/*The function roman_to_integer is used to assign the value for the roman character entered
  here we use switch case to find out the character and return those by their particular value*/


static int roman_to_integer(char c)
{
    switch(c)
        {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
}


/*The main convertion is done in roman_to_int function.
  we read the entered string through roman_to_integer function to get the value of the character.
  when s[i] is not a null, we enter into the for loop.
  here we assign cur and prev to check the condition where smaller roman character appears first
  ex. IX, XV, XC, CD, CM.    
    above example shows the condition.
  whenever the previous number is smaller, then we apply the entered formula.
  
  when first number is greater, we just add that particular roman value to int_num
  
  finally, we return the int_num and get the output.


int roman_to_int(char *s)
{
    int i, int_num = roman_to_integer(s[0]);

    for(i=1;s[i]!='\0';i++)
    {
        int prev = roman_to_integer(s[i-1]);
        int cur = roman_to_integer(s[i]);

        if (prev<cur)
        {
            int_num = int_num - prev + (cur - prev);
        }
        else
        {
            int_num += cur;
        }
    }
    return int_num;
}


