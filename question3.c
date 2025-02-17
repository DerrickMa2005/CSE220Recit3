#include <stdio.h>
#include <string.h>
 
void confuse(int *a, int *b, int n) {
   *a = 20;
   b[1] = *b + n;
   a = b + 2;
   *a = 15;
   printf("confuse: *a = %d, *b = %d, n = %d\n", *a, *b, n);
}
 
int main() {
   int x = 17;
   int a[4];
   a[0] = 10;
   a[1] = 11;
   a[2] = 12;
   a[3] = 13;
   int *p = &x;
   int *q = a;
   q[2] = 42;
   printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);
   printf("a = {%d, %d, %d, %d}\n", a[0], a[1], a[2], a[3]);
   printf("%p", p);
   confuse(p, q, x);
   printf("x = %d, *p = %d, *q = %d\n", x, *p, *q);
   printf("a = {%d, %d, %d, %d}\n", a[0], a[1], a[2], a[3]);
   printf("%p", p);
   return 0;
}
