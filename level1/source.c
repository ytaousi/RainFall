#include <unistd.h>
#include <stdlib.h>
void run(void)
{
    fwrite("Good... Wait what?\n",1,0x13,stdout); // check stdout
    system("/bin/sh");
    return;
}

int main(void)
{
    char array[76];

    gets(array);
    return;
}