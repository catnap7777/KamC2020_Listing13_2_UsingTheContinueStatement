
//Listing 13.2 - Demonstrates the Continue statement; page 303

#include <stdio.h>

int main(void)
{
    //declare buffer for input and a counter variable
    char buffer[81];
    int ctr;
    //input a line of text
    puts("Enter a line of text:");
    gets(buffer);
    //go through the string, displaying only those
    //  characters that are not lowercase vowels

    for(ctr=0; buffer[ctr]!='\0'; ctr++)
    {
        //if the character is a lowercase vowel, loop back
        //   without displaying it
        if (buffer[ctr] == 'a' || buffer[ctr] == 'e' || buffer[ctr] == 'i'
            || buffer[ctr] == 'o' ||buffer[ctr] == 'u')
        {
            continue;
        }
        // if not a vowel, then display it

        putchar(buffer[ctr]);
    }

    puts("\n");
    return 0;
}
