#include <stdio.h>
#include <math.h>
#include <ctype.h>


int main()
{
    char unit;
    float temp;

    printf("\n is the temperature in (F)or (c)?: ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'c'){
        printf("the temp is curre");

    }
    else if(unit == 'f'){

    }


    return 0;
}
