//Author: Cory Caprioli
//Email: cory.caprioli@csu.fullerton.edu
//CPSC 223C Midterm

#include <stdio.h>
#include <string.h>

int copyfile(char*, char*);

int copyfile(char * file, char * file_array) {

  FILE * file_ptr;
  if(file_ptr = fopen(file, "r")) { // create a file pointer and open the file to be read from

    char c = fgetc(file_ptr); //fget the first char of the file
    if (c == EOF) {
      return 0;  //return 0 if the first char is EOF
    } else {
      ungetc(c, file_ptr); // if the first char is not EOF put the char back
    } // checks if file is empty

    int i = 0;
    int onebyte;

    while ((onebyte = fgetc(file_ptr)) != EOF) { // read byte by byte until the end of file is reached
      file_array[i] = onebyte; // input each byte into the array
      i++; // increment to next array location
    }

    fclose(file_ptr);

    int size = strlen(file_array);
    return size;
    
 } else {
   printf("file does not exist\n");
   return 0;
 }
}
