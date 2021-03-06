#Author: Cory Caprioli
#Email: cory.caprioli@csu.fullerton.edu
#CPSC 223C Midterm

echo "Begin program"
rm *.o
rm *.out #compile
gcc -c -m64 -std=c17 -o copy.o copyfile.c
gcc -c -m64 -std=c17 -o mai.o main.c

# Linker
gcc -m64 -std=c17 -o main.out mai.o copy.o

# execute
./main.out
echo "All Done."
