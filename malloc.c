/*
   Ref: https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm

   syntax
   void *malloc(size_t size)

   Parameters:
    - size - This is the size of the memory block, in bytes

   Return Value

   This function returns a pointer to the allocated memory, or NULL if the request fails.

 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

        char *str;


        /* initial memory allocation */

        str = (char *) malloc(25);
        strcpy(str,"tutorialspoint");
        printf("String = %s, Address = %p\n", str, str);

        strcpy(str,"tutorialspoint");
        printf("String = %s, Address = %p\n", str, str);
        /* Reallocating memory */
        str = (char *) realloc(str, 25);
        strcat(str, ".com");

        printf("String = %s Address = %p\n", str,str);

        free(str);

        return(0);

}
