/*https://www.tutorialspoint.com/cprogramming/c_pointers.htm*/


#include <stdio.h>

int main(){
        int *ptr = NULL;
        printf("The value of ptr is %p\n", ptr);

        ptr=ptr + 1;
        printf("The value of ptr is %p\n", ptr);
        return 0;

}
