#include <stdio.h>
int main()
{
    int i , n , s , t=9 ;
    printf("User Input : ");
    scanf("%d", &n);
    printf("--------------------------------\n");
    printf("Series = ");
    for (i = 1; i <= n; i++)
    {
        s = s + t;
        printf("%d", t);
        if (i <= n - 1)
        {
            printf(" + ");
        } 
        t = ( t * 10 ) + 9;
    } 
    printf("\nSum = ");
    printf("%d  ", s);
} 
