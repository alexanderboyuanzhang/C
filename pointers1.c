/*https://www.tutorialspoint.com/cprogramming/c_pointers.htm*/

#include <stdio.h>

int main(){

        /* Accessing a variable's memory using */

        int int1;
        int int2;
        int int3;
        char var1[1];
        char var2[16];
        printf("%p\n", &int1);
        printf("%p\n", &int2);
        printf("%p\n", &int3);
        printf("Address of var1 variable: %p\n", &var1);
        printf("Address of var2 variable: %p\n", &var2);

        for(int i=0; i<sizeof(var2); i++) {
                printf("%p\n", &var2[i]);
        }
        return 0;
}
