// "Print numbers from 1 to 30 But: If divisible by 3 → print \"Fizz\" Otherwise print the number."

#include"stdio.h"
int main()
{
    int a;
    printf("Enter A value:");
    scanf("%d",&a);
    if(a%3 == 0)
     printf("Fizz");
    else
     printf("%d",a);
}
