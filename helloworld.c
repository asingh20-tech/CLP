#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    char line[100];
    char x[5], y[5], z[5];
  
    while (1){
        fgets(line, sizeof(line), stdin);
        int count = sscanf(line, "%4s %4s %4s", x, y, z);
        int y1 = atoi(y);
        int z1 = atoi(z);
        char **p = line;

        if (count > 3){


        }

// ---------------------col and b2d and d2b ------------------------


        if (count == 2 && strcmp(x,"col")==0){
            
        
            while(1){
                printf("%d",y1);
                
                if (y1==1)
                    break;

                printf(" , ");

                if (y1%2==0){
                    y1 = y1 /2;
                }
                else 
                y1 = (3*y1)+1;
            }
            printf("\n");
            continue;
        }    
        
        if (count ==2 && strcmp(x,"d2b")==0){
            int binary[40];
            int i;
            int number = atoi(y);

            if (number == 0) {
            printf("0");
            continue;
        }

            while (number > 0){
                binary[i++]= number%2;
                number = number/2;
            } 
            for (int k= i-1;k >=0 ;k--){
                printf("%d",binary[k]);
                
            }
            printf("\n");
            continue;
        }

        if (count ==2 && strcmp(x,"b2d")==0){
            int decimal = 0;
            int size = strlen(y);
            
            for (int i =0 ; i < size ; i++){
                if (y[i]=='1'){
                    decimal += pow(2, size-1-i);   
                    continue;          
                }
            printf("%d", decimal);
            printf("\n");
            continue;
        } }     
//  -------------------------------- sum, add .... bye -------------------------
        if (count == 3)
        {
            if (strcmp(x, "sum") == 0)
            {
                printf("%d", atoi(y) + atoi(z));
                printf("\n");
            }
            if (strcmp(x, "mul") == 0)
            {
                printf("%d", atoi(y) * atoi(z));
                printf("\n");
            }
            if (strcmp(x, "sub") == 0)
            {
                printf("%d", atoi(y) - atoi(z));
                printf("\n");
            }
            if (strcmp(x, "div") == 0)
            {   if(strcmp(z,"0")==0){
                    printf("it is undefined");
                }
                else{
                    printf("%lf", atof(y)/atof(z));
                }
                printf("\n");
            }
        }
        if (count == 1 && strcmp(x, "bye")==0){
                
                printf("bye");
                printf("\n");
                break;
                
            }
    }    
    
    return 0;
}