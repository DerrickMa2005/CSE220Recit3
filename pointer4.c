#include <stdio.h>
#include <string.h>

int main() {
    char *a = "Hello World";
    while(*a) {
        printf("%c ", *a);
        a++;
    }
 }
 