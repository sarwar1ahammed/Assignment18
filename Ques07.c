#include <stdio.h>
#include <string.h>
// a function to check whether a given string is palindrome or not.
void palindrome(char*);
int main()
{
    char str1[20];
    palindrome(str1);

    printf("\n");
    return 0;
}
void palindrome(char str2[])
{
    printf("Enter a string to check palindrome: ");
    gets(str2);
    int i=0, j = strlen(str2)-1;

    while(i<=j)
    {
        if (str2[i] != str2[j])
        {
            break;
        }
        i++;
        j--;
    } 
    if (i>j)
        printf("Palindrome.");
    else 
        printf("Not a Palindrome.");
}
