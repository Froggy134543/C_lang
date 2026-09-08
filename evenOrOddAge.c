#include <stdio.h>
int main() {
   int age;
   printf("Enter your age: ");
   scanf("%d", &age);
   if (age % 2 ==0) {printf("your age is even\n");}
   else {printf("your age is odd\n");}
   return 0;
    }