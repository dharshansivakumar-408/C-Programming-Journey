#include"stdio.h"
int main()
{
    int a;
    printf("Enter  A value:");
    scanf("%d",&a);
    if(a%3 == 0)
    {
        printf("Divisible by 3");
    }
    else
    {
        printf("Not Divisible ny 3");
    }
    return 0;
}
