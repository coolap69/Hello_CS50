#include <stdio.h>

int main(void)

{

    char character = 112;
    printf("%c\n", character);
    printf("%c\n", 97);
    printf("%c\t%c\n", 17 + 'a', character + 4);
    printf("%lu\t%lu\n", sizeof(int), sizeof(char));
}