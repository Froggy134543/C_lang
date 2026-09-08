#include <stdio.h>
#include <string.h>
int main() {
    char george[] = "george";
    printf("The last character is: %c\n", george[strlen(george) - 1]);
    return 0;
}
