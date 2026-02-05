#include <stdio.h>
#include <strhash.h>
#include <string.h>

struct person {
    char name[15];
    char age;
};

int main(){
    struct person p1;
    
    
    strcpy(p1.name , "aditya" );
    p1.age = 14;
    printf("%s", p1.name);
    return 0 ; 
}