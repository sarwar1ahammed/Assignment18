#include <stdio.h>
#include <string.h>
// Write a function to compare two strings.
int main()
{
    char str1[20], str2[20];
    printf("Enter 1st String to compare with another: ");
    fgets(str1, 20, stdin);
    printf("Enter 2nd String : ");
    fgets (str2, 20, stdin);
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("String are same.");
    else 
        printf("String are not same.");

    printf("\n");
    return 0;
}
