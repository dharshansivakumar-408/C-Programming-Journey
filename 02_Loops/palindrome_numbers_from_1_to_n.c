#include <stdio.h>

int main() 
{
    int n, i, temp, remainder, reversed;
    printf("Enter N value: ");
    scanf("%d", &n);
    printf("Palindromes: ");
    for (i = 1; i <= n; i++)
    {
        temp = i;
        reversed = 0;
        while (temp > 0) 
        {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp = temp / 10;
        }
        if (i == reversed) 
        {
            printf("%d ", i);
        }
    }

    return 0;
}
