#include <unistd.h>
#include <stdlib.h>

void p(void)
{
    char array[76];
    unsigned int returnAddress;

    fflush(stdout);
    gets(array)
    if ( (returnAddress & 0xb0000000) == 0xb0000000)
    {
        printf("subroutine does not return");
        exit(1);
    }
    puts(array);
    strdup(array);
    return;
}

int main(void)
{
    p();
    return;
}