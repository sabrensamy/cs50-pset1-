#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int min,bottles;
    do
    {
        printf("minutes:");
        min = get_int();
    }
    while (false);
    bottles=192*min/16;
    printf ("bottles: %d\n",bottles);
}
