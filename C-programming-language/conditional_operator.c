#include <stdio.h>

/* === conditional operator ==== */

int main()
{
        int a = 10, b = 11;
        int c;
        c = (a < b)? a : b; /* if (a<b) is true, it will return a, else b; see below */
        /* ? makes that result. */
        printf("conditional operator %d \n", c);
}
