#include <stdio.h>
#include <string.h>
// a function to count words in a given string
int words(char*);
int main()
{
    char str1[100];
    int result = words(str1);
    printf("\nWords ==> %d", result);

    printf("\n");
    return 0;
}
int words(char str2[])
{
    printf("Enter a sentence to count word: ");
    fgets(str2, 100, stdin);
    int i, count=1;
    for (i=0; str2[i]; i++)
    {
        if (str2[i]==' ' && str2[i+1]!=' ')
            count++;
    }
    return count;
}
