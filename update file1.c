#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("enter the year:");
    scanf("%d",&year);
    if(year% 4 == 0)
    {
        if( year % 100 == 0)
        {
            if ( year % 400 == 0)
                printf("%d is a Leap Year", year);
            else
                printf("%d is not a Leap Year", year);
        }
        else
            printf("%d is a Leap Year", year );
    }
    else
        printf("%d is not a Leap Year", year);

    return 0;
}
