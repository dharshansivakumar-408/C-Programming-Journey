#include"stdio.h"
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    if(n%4 == 0)
    {
        printf("multiple of 4");
    }
    else if(n%6 == 0)
    {
        printf("multiple of 6");
    }
    else
    {
        printf("Not multiple of 4 or 6");
    }
}
