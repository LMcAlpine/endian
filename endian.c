#include <stdio.h>

int main()
{
    int a = 0xAABBCCDD;
    char *b = (char *)&a;

    // Check LSB
    if ((unsigned char)b[0] == 0xDD)
    {
        printf("little endian\n");
    }
    else
    {
        printf("big endian\n");
    }

    for (int i = 0; i < sizeof(a); i++)
    {

        printf("%x\n", (unsigned char)b[i]);
    }
}