#include"stdio.h"
int main()
{
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    if(n>=10 && n<=50)
    {
        printf("In range");
    }
    else
    {
        printf("Out of range");
    }
    return 0;
}
