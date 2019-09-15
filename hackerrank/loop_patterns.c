#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

        int n=5;

        for(int i = 0; i<(n); i++) {
                for(int j=0; j<(n+n-1); j++) {

                        if(j<i) {
                                printf("%d", n-j);
                        }else
                                printf("%d",n-i);
                }
                printf("\n");
        }

        return 0;
}
