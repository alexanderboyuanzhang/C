#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

        int n=5;

        for(int i = 0; i<=(n+n-2); i++) {
                for(int j = 0; j<=(n+n-2); j++) {
                        if(i<n && j<n) {
                                if(i<j)
                                        printf("%d ", n-i);
                                else printf("%d ", n-j);
                        } else if(i>=n && j<n) {
                                if((n-1)*2-i<j)
                                        printf("%d ", n- ((n-1)*2-i) );
                                else printf("%d ", n-j );
                        } else if(j>=n && i<n) {
                                if((n-1)*2-j<i)
                                        printf("%d ", n- ((n-1)*2-j) );
                                else printf("%d ", n-i );
                        }else{
                                if((n-1)*2-j<(n-1)*2-i)
                                        printf("%d ", n- ((n-1)*2-j) );
                                else printf("%d ", n-((n-1)*2-i) );
                        }
                }

                printf("\n");
        }
        return 0;
}
