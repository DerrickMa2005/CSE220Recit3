#include <stdio.h>

int main() {
    int nums[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *point = nums[1] + 1;
    printf("%d\n", *(point));
}