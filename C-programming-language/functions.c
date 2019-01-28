#include <stdio.h>

 /* === function ==== */
int main()
{
        int i = 100, j = 200;
        int m;

        m = max(i, j);

        printf("max example %d \n", m);
}

int max(int x, int y)
{
        int result;

        if (x > y)
                result = x;
        else
                result = y;
        return result;
}
