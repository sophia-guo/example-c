#include <stdio.h>

static int t = 0;

int main()
{
    if (t)
        printf("on this line\n");
    else {
        printf("but not here\n");
        printf("reduce covrage\n");
        printf("reduce covrage\n");
    }

    return 0;
}
