#include <stdio.h>

/* === structure ==== */

struct distance /* read below */
{
        int feet;
        float inch;
} d1,d2,sum;


/* structure name is distance.
 * feet and inch are a property of a value.
 * d1,d2,sum are the container.
 * we use d1 and d2 from input from user and sum it on below
*/

int main()
{
        scanf("%d", &d1.feet);
        scanf("%f", &d1.inch);
        scanf("%d", &d2.feet);
        scanf("%f", &d2.inch);

        sum.feet = d1.feet + d2.feet;
        sum.inch = d1.inch + d2.inch;
        printf("sum is feet %d \n", sum.feet);
        printf("sum is inch %f \n", sum.inch);

}
