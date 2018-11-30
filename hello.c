#include <stdio.h>

static int t = 1;

int main()
{
    if (t) {
        printf("on this line\n");
        printf("increase line coverage\n");
    }
    else {
        printf("but not here\n");
    }

    return 0;
}
