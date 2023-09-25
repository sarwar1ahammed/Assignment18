#include <stdio.h>
#include <string.h>
// a function to transform string into lowercase
int main()
{
    char str[20];
    printf("Enter a string in UpperCase: ");
    fgets(str, 20, stdin);
    printf("%s", strlwr(str));
    printf("\n");
    return 0;
}
