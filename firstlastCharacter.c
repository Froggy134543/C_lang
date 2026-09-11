#include <stdio.h>
#include <string.h>
int main(){
    char name[]="George";
    printf("The first character of the name is: %c\n", name[0]);
    printf("The last character of the name is: %c\n", name[strlen(name) - 1]);
    return 0;
}