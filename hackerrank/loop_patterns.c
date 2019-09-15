#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

        int n=5;

        for(int i = 1; i<=(n); i++) {
                int j = 0;
                for(j=1; j<=(n+n-1); j++) {

                        if(j<=i) {
                                printf("%d", n-j+1);
                        }else if(i+j<=n*2)
                                printf("%d",n-i+1);
                        else printf("%d",j-n+1 );
                }

                printf("\n");
        }

        return 0;
}
