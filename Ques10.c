#include <stdio.h>
#include <string.h>
// a function to find the repeated character in a given string.
int main()
{
    char str[] = "Sarwar Ahammed";
    char cha = 'S';
    int i=0, flag=0;
    while(str[i])
    {
        if(str[i]==cha)
            flag++;
        i++;
    }
    printf("%c ==> %d", cha, flag);
    

    printf("\n");
    return 0;
}
