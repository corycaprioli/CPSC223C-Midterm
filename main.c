//Author: Cory Caprioli
//Email: cory.caprioli@csu.fullerton.edu
//CPSC 223C Midterm
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int copyfile(char*, char*);

int main() {
  char * filename = (char *)malloc(4096 * sizeof(char));
  char * file_content = (char *)malloc(16384 * sizeof(char));
  int size;

  printf("Please enter a file name to be copied: ");
  scanf("%s", filename);
  size = copyfile(filename, file_content);
  printf("%s\n", file_content);
  printf("%d\n", size);




  return 0;
}
