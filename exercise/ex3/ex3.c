#include <stdio.h>
char dest_buffer[100];
char str1[] = "Hello";
char str2[] = "World";
void mycat(int n);

int main(void)
{
  mycat(7);
  printf("%s\n",dest_buffer);
  return 0;
}

void mycat(int n)
{
  int i;
  for (i=0; str1[i]!='\0'; i++)
    if (n==i)
      dest_buffer[i] = '\0';
    else
      dest_buffer[i] = str1[i];
  
  int j;
  for (j=0; str2[j]!='\0'; j++)
    if (n==i+j)
      dest_buffer[i+j] = '\0';
    else
      dest_buffer[j+i] = str2[j];
}
