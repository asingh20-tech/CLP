#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>




void print_error() {
    printf("\033[1;31m[Error] --> Please enter the command correctly!\033[0m\n");
} 

int is_decimal(char *s) {
    if (s == NULL || *s == '\0') return 0;

    for (int i = 0; s[i]; i++) {
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}

int is_binary(char *s) {
    if (s == NULL || *s == '\0') return 0;

    for (int i = 0; s[i]; i++) {
        if (s[i] != '0' && s[i] != '1')
            return 0;
    }
    return 1;
}



int main()
{
    char line[100];
    char x[5], y[5], z[5] , e[5];

    

  
    while (1){
        printf("asingh20 $ ");
        if (fgets(line, sizeof(line), stdin) == NULL)
            break;  

        int count = sscanf(line, "%4s %4s %4s %4s", x, y, z, e);
        int y1 = atoi(y);
        int z1 = atoi(z);
        


// ---------------------col and b2d and d2b ------------------------


        if (strcmp(x,"col")==0){
            if (count != 2 || !is_decimal(y)) {
                print_error();
                continue;
            }

            int n = atoi(y);

            if (n <= 0) {
                print_error();
                continue;
            }
        
            while(1){
                printf("%d",n);
                
                if (n==1)
                    break;

                printf(" , ");

                if (n%2==0){
                    n = n /2;
                }
                else 
                n = (3*n)+1;
            }
            printf("\n");
            continue;
        }    
        
        if (count ==2 && strcmp(x,"d2b")==0){
            if (count != 2 || !is_decimal(y)) {
                print_error();
                continue;
            }
            int binary[40];
            int i = 0;
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
            if (count != 2 || !is_binary(y)) {
                print_error();
                continue;
            }
            int decimal = 0;
            int size = strlen(y);
            
            for (int i =0 ; i < size ; i++){
                if (y[i]=='1'){
                    decimal += pow(2, size-1-i);   
                    continue;          
                }
    
            }
            printf("%d", decimal);
            printf("\n");
            continue;
     }     
//  -------------------------------- sum, add .... bye -------------------------

        if (strcmp(x, "sum") == 0 || strcmp(x, "sub") == 0 || strcmp(x, "mul") == 0 || strcmp(x, "div") == 0)
        {
            if (count != 3 || !is_decimal(y) || !is_decimal(z)) {
                print_error();
                continue;
            }

            int a = atoi(y);
            int b = atoi(z);

            if (strcmp(x, "sum") == 0)
            {
                printf("%d", a + b);
                printf("\n");
            }
            if (strcmp(x, "mul") == 0)
            {
                printf("%d", a * b);
                printf("\n");
            }
            if (strcmp(x, "sub") == 0)
            {
                printf("%d", a - b);
                printf("\n");
            }
            if (strcmp(x, "div") == 0)
            {   if(strcmp(z,"0")==0){
                    print_error();
                }
                else{
                    printf("%.3g \n", (double)a/b);
                }
                printf("\n");
            }
        }
        if (count == 1 && strcmp(x, "bye")==0){
                
                printf("bye");
                printf("\n");
                break;
                
            }
        else {
    print_error();
}    
    }    
    
    return 0;
}