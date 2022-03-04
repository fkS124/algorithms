/*
@CopyRight fkS124

Given two integers a and b, a and b are amicable if the sum of the divisors of b is equal to a and the contrary.
*/
#include <stdio.h>

int sumDivider(int n);
int intInput(char text[]);


int main(int argc, char *argv[]) {
    int amicable[10001], i, n;
    n = intInput("Enter n (must be < 10000): ");
    if (n > 10000){
        printf("Error, you entered a number greater than 10000");
        return -1;
    }

    for (i = 1; i < 10001; i++) {
        if (sumDivider(i) == n && sumDivider(n) == i){
            amicable[i] = i;
        }
        else
            amicable[i] = 0;
    }
    
    printf("%d is amicable with : ", n);
    for (i = 1; i < 10001; i++) {
        if (amicable[i] != 0)
            printf("%d", amicable[i]);
    }

    return 0;
}


int sumDivider(int n) {
    int sum, i;
    sum = 0;

    for (i = 1; i < n; i++){
        if (i != 0 && n%i == 0){
            sum+=i;
        }
    }
    return sum;
}


int intInput(char text[]) {
    int integer;

    printf(text);
    scanf("%d", &integer);
    return integer;
}