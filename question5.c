#include <stdio.h>

int main() {
    int x = 0x455343;
    // x is stored in little endian
    // +------+------+------+------+
    // | 0x43 | 0x53 | 0x45 | 0x00 |
    // +------+------+------+------+

    int* x_ptr = &x;
    // Pointers are variables that hold memory addresses.
    // What happens when we take a memory address and put it in a different type of pointer?
    char* x_char_ptr = x_ptr;

    // Let's see what lives at addresses x_ptr and x_char_ptr.
    printf("x = %d = 0x%08x\n", x, x);
    printf("addr %p: %d = 0x%08x\n", x_ptr, *x_ptr, *x_ptr);
    printf("addr %p: %s\n", x_char_ptr, x_char_ptr);
    printf("addr %p, addr %p", x, x_ptr);

    // We can print strings character by character.
    printf("addr %p: %c = 0x%02x\n", x_char_ptr, *x_char_ptr, *x_char_ptr);
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 1, *(x_char_ptr + 1), *(x_char_ptr + 1));
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 2, *(x_char_ptr + 2), *(x_char_ptr + 2));
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 3, *(x_char_ptr + 3), *(x_char_ptr + 3));

    printf("\n");

    // What are we modifying here? Does x change? Does *x_ptr change?
    x_char_ptr[3] = 'S';

    printf("x = %d = 0x%08x\n", x, x);
    printf("addr %p: %d = 0x%08x\n", x_ptr, *x_ptr, *x_ptr);
    printf("addr %p: %s\n", x_char_ptr, x_char_ptr);

    printf("addr %p: %c = 0x%02x\n", x_char_ptr, *x_char_ptr, *x_char_ptr);
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 1, *(x_char_ptr + 1), *(x_char_ptr + 1));
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 2, *(x_char_ptr + 2), *(x_char_ptr + 2));
    printf("addr %p: %c = 0x%02x\n", x_char_ptr + 3, *(x_char_ptr + 3), *(x_char_ptr + 3));

    // A pointer is just variable that holds a memory address.
    // We are responsible for keeping track of what lives at that address.
}
