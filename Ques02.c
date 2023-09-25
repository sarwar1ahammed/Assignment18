#include <stdio.h>
#include <string.h>
// a function to reverse a string.
void reverse(char*);
int main()
{
    char str1[20];
    
    reverse(str1);

    printf("\n");
    return 0;
}
void reverse (char str2[])
{
    printf("Enter a String to reverse it: ");
    fgets(str2, 20, stdin);
    int i=0, j = strlen(str2)-1;
    char temp;
    
    while(i<=j)
    {
        temp = str2[j];
        str2[j] = str2[i];
        str2[i] = temp;
        i++;
        j--;
    }
    printf("%s", str2);
}
