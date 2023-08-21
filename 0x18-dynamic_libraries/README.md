Dynamic Libraries in C
STEPS

1. Create obect files for files to e included in the library

gcc -c files.c 

2. Create a dynamic lirary usin the resulting object files

gcc objectfiles.o -shared -o liname.so

3. Create an oject file for the main program

gcc -c main.c

4. Link the dynamic lirary to the executable

gcc -o eecutalename main.o -L. -lname
