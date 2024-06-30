#include <unistd.h>

void put(char c)
{
        write(1, &c, 1);
}