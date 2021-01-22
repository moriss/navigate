#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
//Print 'hello [user input]' to the screen

int main (void)
{
    char * name = get_string("What is your name?: " );

   printf("hello %s\n", name);//Check notes for void_input.c file, after each line of code.
   int count = 0;
   for (int i = 0; i < strlen(name); i ++ )
   {
       if(name[i] != 32 )
       {
           count = count + 1;
       }
   }
   printf("There are %i letters in your name.", count);

}



