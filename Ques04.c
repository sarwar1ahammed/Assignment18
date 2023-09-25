#include <stdio.h>
#include <string.h>
// a function to transform string into uppercase
int main()
{
    char str[20];
    printf("Enter a string in LowerCase: ");
    fgets(str, 20, stdin);
    printf("%s", strupr(str));
    printf("\n");
    return 0;
}
