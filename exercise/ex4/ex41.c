#include <stdio.h>

char * mystrcpy(char *, char *);

int main(void) {
  char dest[100];
  char src[] = "Test string\n";
  char *p;
  
  if (p = mystrcpy(dest,src)) {
    printf("%s\n",p);
    return(0);
  }
  else {
    printf("null pointer received\n");
    return(1);
  }
}


/* mystrcpy: Copy a string from s to a buffer pointer to by d. 
   d = destination buffer
   s = source string
   return value = a pointer to the beginning of the string in the destination buffer. 
*/
char * mystrcpy(char *d, char *s) {
  char *n = d;
  
  while (*s != 0) {
    *n = *s;
    s++;
    n++;
  }
  *n = 0;
  return d;
}
