/*

Chef started watching a movie that runs for a total of 
�
X minutes.

Chef has decided to watch the first 
�
Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first 
�
Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that 
�
Y is even.

Input Format
The first line contains two space separated integers 
�
,
�
X,Y - as per the problem statement.
Output Format
Print in a single line, an integer denoting the total number of minutes that Chef spends in watching the movie.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int full, half, diff;
    scanf("%d %d",&full,&half);
    if(half%2==0)
    {
        diff = half/2;
        int total = full-diff;
        printf("%d",total);
    }
    return 0;
}
