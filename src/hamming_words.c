/*
@CopyRight fkS124

This algorithm doesn't work :thumbsup:
*/
#include <stdio.h>
#include <string.h>

int hamming(char *word1[], char *word2[]);


int main(int argc, char *argv[])
{   
    char word1, word2;

    printf("Enter the first word :");
    scanf("%c", &word1);
    printf("Enter the second word :");
    scanf("%c", &word2);

    if (strlen(word1) != strlen(word2))
    {
        printf("The words haven't the same size.");
        return -1;
    }

    printf("%d", hamming(word1, word2));

    return 0;
}


int hamming(char *word1[], char *word2[])
{
    int n, i;
    n = 0;

    for (i = 0; i < strlen(word1); i++)
    {
        if (word1[i] != word2[i])
        {
            n += 1;
        }
    }
    return n;
}