/*
@CopyRight fkS124

An armstrong number is a number that is equal to the sum of cubes of its digits
eg.: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int isArmstrong(int n);


int main(int argc, char *argv[]) 
{
    int numberOfTests, i;

    printf("Enter the number of first integers you want to test (>0): ");
    scanf("%d", &numberOfTests);

    printf("The first %d integers are : ", numberOfTests);
    for (i = 1; i < numberOfTests; i++) {
        if (isArmstrong(i) == 1)
            printf("%d ", i);
    }
}


int isArmstrong(int n)
{
    int sum, i;
    char digits[10];
    itoa(n, digits, 10);
    sum = 0;
    for (i = 0; i < strlen(digits); i++) {
        int intI = atoi(digits[i]);
        sum += pow(intI, 3);
    }
    printf("%d : %d \n", n, sum);
    if (sum == n)
        return 1;
    else
        return 0;
}

