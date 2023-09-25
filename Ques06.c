#include <stdio.h>
#include <string.h>
// a function to check whether a given string is an alphanumeric string or not.
int main()
{
    char str[20];
    printf("Enter a string to check alphanumeric string: ");
    fgets(str, 20, stdin);
    int flag1=0,flag2=0;
    for (int i=0; str[i]; i++)
    {
        if (str[i]>='a' && str[i]<='z') 
            flag1++;
        else if (str[i]>='0' && str[i]<='9')
            flag2++;
    }

    if (flag1>=1 && flag2>=1)
        printf("Alphanumeric string.");
    else 
        printf("Not an Alphanumeric string.");

    printf("\n");
    return 0;
}
