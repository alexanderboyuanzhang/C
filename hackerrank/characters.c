#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

        /* Enter your code here. Read input from STDIN. Print output to STDOUT
           int age;
           char name[30];
           char temp;

           printf("Enter age: ");
           scanf("%d",&age);
           printf("Enter name: ");
           scanf("%c",&temp); // temp statement to clear buffer
           fgets(name,30,stdin);

           printf("Name is: %s, age is: %d\n",name,age);
           return 0;
         */

        char temp;
        char ch[10], str[20], sen[100];

        scanf("%s", ch);
        //fgets(ch, 10, stdin);
        scanf("%s", str);
        //fgets(str, 20, stdin);
        scanf("%c", &temp);
        fgets(sen,30,stdin);

        printf("%s\n%s\n%s", ch,str,sen);


        return 0;
}
