#include <cs50.h>
#include <stdio.h>
#include <string.h>

//argument count, string or character
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: strings \"phrase\"\n");
        exit(1);
        // or return 1;
    }
    // printf("%i\n", argc);
    // int length = strlen(argv[1]);
    // printf("%i\n", length);

    for(int i = 0, length = strlen(argv[1]); i < length; i++)
    {
        if (argv[1][i] !=' ')
        {
        printf("the ascii value at pos %i: %i\n", i, argv[1][i]);
        }
    }
}
