#include <stdio.h>
void modifyVariable(int *var) {
    *var = 10;
 }
  
 int main() {
    int num = 5;
    modifyVariable(&num);
    printf("%d\n", num);  // Output: 10
    return 0;
 }
 