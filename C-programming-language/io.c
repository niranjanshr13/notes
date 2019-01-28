#include <stdio.h>

/* === I/O ==== */

int main()
{
        int a;
        scanf("%d", &a); /* wait for the input and put it in 'a' address */
        printf("i/o is %d \n", a); /* print the int of a, not the address */
}
