#include <stdio.h>

static int t = 0;

int main()
{
    if (t)
        printf("on this line\n");
    else {
        printf("but not here\n");
    }

    return 0;
}
