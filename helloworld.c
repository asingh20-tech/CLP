#include <stdio.h>

int main(){
    char name [25];
    int age;

    printf ("whats your name");
    fgets(name,25,stdin);

    printf("whats you age");
    scanf("%d",&age);
    printf("How much year %s old you are %d", name,age);

    return 0;
}