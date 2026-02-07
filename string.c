#include <stdio.h>
#include <strhash.h>
#include <string.h>



int main(){
    int x = 5;
    int *p = &x;
    p++;

    printf("%d\n", *p); 
    printf("%d", x);
    
    return 0;
}