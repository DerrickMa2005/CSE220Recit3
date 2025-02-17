#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
 
int subtract(int a, int b) {
    return a - b;
}

void performOperation(int (*func)(int, int), int a, int b) {
   int result = func(a, b); //(*func)(a, b);
   printf("Result: %d\n", result);
}
 
int main() {
   performOperation(add, 10, 5);
   performOperation(subtract, 10, 5);
   return 0;
}
