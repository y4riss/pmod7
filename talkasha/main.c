#include <stdlib.h>

void talkasha(int n);

int main(int argc, char *argv[])
{
    if (argc < 2)
        return 0;

    talkasha(atoi(argv[1]));
}