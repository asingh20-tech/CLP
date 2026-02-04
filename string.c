#include <stdio.h>
#include <strhash.h>

struct person {
    char name[15];
    char age;
};

int main(){
    struct person p1;
    
    
    strcpy(p1.name[0] , "aditya" );
    p1.age = 14;
    printf("%s", p1.name);
    
}