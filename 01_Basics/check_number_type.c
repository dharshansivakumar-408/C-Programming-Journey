#include"stdio.h"
int main()
{
    int a;
    printf("Enter A value:");
    scanf("%d",&a);
    if(a>0 && a%2 == 0)
    {
        printf("Positive Even");
    }
    else if(a>0 && a%2 != 0)
    {
        printf("positive Odd");
    }
    else if(a<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
