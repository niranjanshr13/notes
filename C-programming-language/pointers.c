#include <stdio.h>

/* === pointer ==== */

int main()
{
        int *p,b ; /* *p is creating a pointer with int as type */
        b = 10;
        p = &b; /* point p to b */
        printf("pointers %u \n", p); /* it will point the address of p, and %u <== address */
}


