#include <stdio.h>

/*
 * include ; includes headers(pre-processor) (i.e package in python)
*/

int main()
/* int ; int is a return type which is integer; 
 * there can be:
 * 1. int
 * 2. char
 * 3. void,
 * 4. float
 * 5. double
 */
        /*
         * main; main is a method.
         */
{
        int x , y; /* define the variable type */
        int z;
        x = 2; /* assign value  */
        y = 1;
        z = x + y; /* some math */
        printf("testing the arithmetic %d \n", z);  /* read below */
        /*
         *printf; printf isn't build on "c", but given by stdio.h
         * %d; it is for digit (int)
         * %f; floating
         * %c; char
         * %s; string
         */

        /* ======= if statement ========= */
        if(x>2)
        {
                printf("testing the if; x is greater than 2 \n");
        }
        else
        {
                printf("testing the if; x is less than 2 \n");
        }

        /* ========= switch statement ======== */
        char switchCheck = 'Y';
        switch(switchCheck)
        {
                case 'Y':
                        printf("switch is Y \n");
                        break;
                case 'N':
                        printf("switch is N \n");
                        break;
        }
        /* Notes:
         * - single quote vs double quote
         *  - single quote = single character
         *  - double quote = literal string
         * - don't forget to add semi-colon on the end.
        */

        /* ======= for loop ========= */
        for (int x = 0 ; x < 5 ; x = x + 1)
                /* explain inside the bracket:
                 * - x = 0 ===> int
                 * - x < 5 ===> condition
                 * - x = x + 1 ===> increment
                 */
        {
                printf("testing out the for loop %d \n", x);
        }

        /* ======= while loop ======== */
        int g = 1;
        while (g < 7)
        {
                printf("testing out the while loop %d \n", g);
                g++; /* g++ == g = g + 1 */
        }
        /* notes:
         *  - just learned you can't assign the same variable twice (check)
         *
         *
         */

        /* ======= array ======= */
        int q[3] ; /* creating a array limit. */
        int i = 0 , j ; /* assigning int to i and j and giving i value of 0 */

        while (i < 3) /* while loop  */
        {
                q[i] = 10 + i; /* i is chaning here because of i++, and q[?] is changing it too + its value*/
                i++;
        }
        for (j = 0; j<3; j++) /* for loop */
        {
                printf("array testing [%d] = %d \n", j, q[j]); /* j = value is changing because of for loop and asking the q[?] array position and outputing */
        }

        /* ====== string ===== */

        char str[6] = "string";    /* string, why 6: placed */
        printf("string example %s \n", str); /* %s for string */
}



/* build the code
 * cc source.c -o output
*/
