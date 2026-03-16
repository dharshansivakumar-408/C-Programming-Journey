#include"stdio.h"
int main()
{
    int a;
    int sum=0;
    printf("Enter A value:");
    scanf("%d",&a);
    for(int i=1;i<=a;i+=2)
     sum = sum+i;
     printf("%d",sum);
    return 0;
}
