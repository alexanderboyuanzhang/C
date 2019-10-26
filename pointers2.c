/*https://www.tutorialspoint.com/cprogramming/c_pointers.htm*/

#include <stdio.h>

int main(){
        int var = 20; /* actual variable declaration */
        int *ip; /* pointer variable declaration */

        ip = &var; /* store address of var in pointer variable */

        printf("Address of variable: %p\n", &var);

        printf("Address stored in ip variable: %p\n", ip);

        /* access the value using the pointer */

        printf("Value of *ip variable: %d\n", *ip);

        return 0;
}
