#include <stdio.h>
int main() 
{
    int num, rev = 0, rem, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        rem = num % 10;        
        rev = rev * 10 + rem; 
        num = num / 10;   
    }
    if(rev == original)
        printf("It is Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}
