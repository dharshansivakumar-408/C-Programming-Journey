#include <stdio.h>
int getFactorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        sum += getFactorial(temp % 10); 
        temp /= 10;                     
    }

    if (sum == num)
        printf("Yes, it is a Strong Number.\n");
    else
        printf("No, it is not.\n");

    return 0;
}
