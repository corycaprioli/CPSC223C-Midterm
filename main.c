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
  scanf("%s", filename); // get file name from user
  size = copyfile(filename, file_content); //copy the file with the function
  printf("one dim array:\n%s", file_content); // print out array and the length
  printf("number of char: %d\n\n", size);
  printf("Goodbye.\n\n");

  return 0;
}
