#include <stdio.h>

int main()
{
  char blocks[3] = {'A','1','5'};
  char *ptr = &blocks[0];
  char temp;
 
  ptr = blocks + 1;
  temp = *ptr;
  temp = *(ptr + 1);
 
  ptr = blocks;
  temp = *++ptr;
  temp = ++*ptr;
  temp = *ptr++;
  temp = *ptr;
  return 0;
}
