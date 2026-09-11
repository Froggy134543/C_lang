#include <stdio.h>
int main() {
    int age;
    printf("enter your age: ");
    scanf("%d", &age);
    if (age > 0 && age < 10) {
        printf("you are a kid\n");
    } else if (age >= 10 && age < 20) {
        printf("you are a teenager\n");
    } else if (age >= 20 && age < 40) {
        printf("you are an adult\n");
    } else if (age >= 40 && age < 60) {
        printf("you are middle-aged \n");
    } else if (age >= 60 && age < 120) {
        printf("you are a senior\n");
    } else if (age >= 120) {
        printf("HOW ARE YOU EVEN ALIVE?\n");
    }
    return 0;
}