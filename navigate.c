#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Print 'hello world' to the screen

int main (void)
{
    char * name = get_string("What is your name?: " );
    
   printf("hello %s\n", name);//Check notes for void_input.c file, after each line of code.
}
