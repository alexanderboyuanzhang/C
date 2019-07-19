#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int a, b;
        float c, d;

        scanf("%d %d", &a, &b);
        scanf("%f %f", &c, &d);

        int sum_ab = a+b;
        int diff_ab = a-b;
        float sum_cd = c + d;
        float diff_cd = c-d;

        printf("%d %d\n%0.1f %0.1f", sum_ab,diff_ab, sum_cd, diff_cd);

        return 0;
}
