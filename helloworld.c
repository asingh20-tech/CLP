#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char line[100];
    char x[5], y[5], z[5];
    fgets(line, sizeof(line), stdin);
    int count = sscanf(line, "%4s %4s %4s", x, y, z);
    int y1 = atoi(y);
    int z1 = atoi(z);

    if (count == 2 && strcmp(x,"col")==0){
        printf("%d",y1);
        while(1){
            if (y1%2==0){
                y1 = y1 /2;
            }
            else 
            y1 = (3*y1)+1;
        }
        return 0;  
    }
        
        
    
    if (count == 3)
    {
        if (strcmp(x, "sum") == 0)
        {
            printf("%d", atoi(y) + atoi(z));
        }
        if (strcmp(x, "mul") == 0)
        {
            printf("%d", atoi(y) * atoi(z));
        }
        if (strcmp(x, "sub") == 0)
        {
            printf("%d", atoi(y) - atoi(z));
        }
        if (strcmp(x, "div") == 0)
        {   if(strcmp(z,"0")==0){
                printf("it is undefined");
            }
            else{
                printf("%lf", atof(y)/atof(z));
            }

            
        }
        if (strcmp(x, "bye")==0){
            printf("bye");
        }
    }
    
    return 0;
}