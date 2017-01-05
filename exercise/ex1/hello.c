/* main.c --- 
 *
 * Filename: main.c
 * Description: Basic C program to print out hello world 
 * Author: Bryce Himebaugh
 *
*/

#include <stdio.h>

int main(void) {
  int i = 1;
  while (i<3) {
    
    sleep(2);
    printf("Hello World!\n");
  }
  return(0); 
}


