# 0x00-hello_world

* **file** 0-preprocessor - script that runs a C file through the preprocessor and save the result into another file.

>> * The C file name will be saved in the variable $CFILE
>> * The output should be saved in the file c

* **file** 1-compiler - script that compiles a C file but does not link.

>> * The C file name will be saved in the variable $CFILE
>> * The output file should be named the same as the C file, but with the extension .o instead of .c

* **file** 2-assembler - script that generates the assembly code of a C code and save it in an output file.

>> * The C file name will be saved in the variable $CFILE
>> * The output file should be named the same as the C file, but with the extension *.s* instead of *.c*
>> * Example: if the C file is *main.c*, the output file should be *main.s*

* **file**3-name - script that compiles a C file and creates an executable named cisfun.

>> * The C file name will be saved in the variable $CFILE

* **file**4-puts.c - C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

>> * Use the function puts
>> * Not allowed to use printf
>> * Program should end with the value 0

* **file**5-printf.c - C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

>> * Use the function printf
>> * Not allowed to use the function puts
>> * Program should return 0
>> * Program should compile without warning when using the -Wall gcc option

* **file**6-size.c - C program that prints the size of various types on the computer it is compiled and run on.

>> * Might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

* **file**100-intel - script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

>> * The C file name will be saved in the variable $CFILE.
>> * The output file should be named the same as the C file, but with the extension .s instead of .c

* **file**101-quote.c - C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

>> * Functions listed in the NAME section of the man (3) printf or man (3) puts not allowed.
>> * Program should return 1
>> * Program should compile without any warnings when using the -Wall gcc option
