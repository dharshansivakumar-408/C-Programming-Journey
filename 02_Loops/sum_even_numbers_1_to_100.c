#include"stdio.h"
int main()
{
    int n=100;
    int sum =0;
    for(int i=2;i<=n;i+=2)
    {
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
