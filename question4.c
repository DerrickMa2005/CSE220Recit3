#include <stdio.h>
 
void foo(int *a, int *b, int *c) {
   b[2] = -2;
   b[1] = a[0] + *c;
   *a = 15;
   printf("foo: *a = %d, *b = %d, *c = %d\n", *a, *b, *c);
}
 
int main() {
   int x = 42;
   int y[3];
   y[0] = 1;
   y[1] = 2;
   y[2] = 3;
   int *p = &y[1];
   p[1] = 17;
   printf("x = %d, *p = %d\n", x, *p);
   printf("y = {%d, %d, %d}\n", y[0], y[1], y[2]);
   foo(&x, y, p);
   printf("x = %d, *p = %d\n", x, *p);
   printf("y = {%d, %d, %d}\n", y[0], y[1], y[2]);
   return 0;
}
