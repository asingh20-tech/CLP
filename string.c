#include <stdio.h>
#include <strhash.h>

int main(){
    char string1[] = "bro";
    char string2[]= "code";

    strlwr(string1);
    strupr(string1);
    strcat(string1,string2);
    strncat(string1,string2,1);
    strcpy(string1,string2);
    strncpy(string1,string2,4);
    strlen(string1);

}