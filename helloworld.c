#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

void print_error() {
    printf("\033[1;31m[Error] Please enter the command correctly!\033[0m\n");
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
void col(int count, char *y) {
    if (count != 2 || !is_decimal(y)) {
        print_error();
        return;
    }
    int n = atoi(y);

    if (n <= 0) {
        print_error();
        return;
    }
    while (1) {
        printf("%d", n);
        if (n == 1) break;
        printf(" , ");
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (3 * n) + 1;
    }
    printf("\n");
}
void d2b(int count, char *y) {
    if (count != 2 || !is_decimal(y)) {
        print_error();
        return;
    }
    int binary[40];
    int i = 0;
    int number = atoi(y);
    if (number == 0) {
        printf("0\n");
        return;
    }
    while (number > 0) {
        binary[i++] = number % 2;
        number = number / 2;
    }
    for (int k = i - 1; k >= 0; k--) {
        printf("%d", binary[k]);
    }
    printf("\n");
}

void b2d(int count, char *y) {
    if (count != 2 || !is_binary(y)) {
        print_error();
        return;
    }
    int decimal = 0;
    int size = strlen(y);
    for (int i = 0; i < size; i++) {
        if (y[i] == '1') {
            decimal += pow(2, size - 1 - i);
        }
    }
    printf("%d\n", decimal);
}
void sum(int count, char *y, char *z) {
    if (count != 3 || !is_decimal(y) || !is_decimal(z)) {
        print_error();
        return;
    }
    int a = atoi(y);
    int b = atoi(z);
    printf("%d\n", a + b);
}
void sub(int count, char *y, char *z) {
    if (count != 3 || !is_decimal(y) || !is_decimal(z)) {
        print_error();
        return;
    }
    int a = atoi(y);
    int b = atoi(z);
    printf("%d\n", a - b);
}
void mul(int count, char *y, char *z) {
    if (count != 3 || !is_decimal(y) || !is_decimal(z)) {
        print_error();
        return;
    }
    int a = atoi(y);
    int b = atoi(z);
    printf("%d\n", a * b);
}
void divide(int count, char *y, char *z) {
    if (count != 3 || !is_decimal(y) || !is_decimal(z)) {
        print_error();
        return;
    }
    int a = atoi(y);
    int b = atoi(z);
    if (strcmp(z, "0") == 0) {
        print_error();
    } else {
        printf("%.3g ", (double)a / b);
    }
    printf("\n");
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

        if (strcmp(x,"col")==0){
            col(count,y);
            continue;
        }    
        
        if (count ==2 && strcmp(x,"d2b")==0){

            d2b(count , y);
            continue;
        }

        if (count ==2 && strcmp(x,"b2d")==0){
            b2d(count , y);
            continue;
     }     
        
        if (strcmp(x, "sum") == 0) {
            sum(count, y, z);
            continue;
        }

        if (strcmp(x, "sub") == 0) {
            sub(count, y, z);
            continue;
        }

        if (strcmp(x, "mul") == 0) {
            mul(count, y, z);
            continue;
        }

        if (strcmp(x, "div") == 0) {
            divide(count, y, z);
            continue;
        }

        if (count == 1 && strcmp(x, "bye") == 0) {
            printf("bye\n");
            break;
        } else {
            print_error();
        }
    }

    return 0;
}
    
