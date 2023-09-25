#include <stdio.h>
// a function to calculate length of the string
int length(char*);
int main()
{
    char str1[20];
    int result = length(str1);
    printf("Length of the String is : %d", result);

    printf("\n");
    return 0;
}
int length(char str2[])
{
    int i;
    printf("Enter a String to calculate the length : ");
    fgets (str2, 20, stdin);
    for (i=0; str2[i]; i++);
    return (i-1);
}
