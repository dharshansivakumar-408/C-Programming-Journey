Find the sum of all numbers from 1 to 100 that are divisible by 5.
#include"stdio.h"
int main()
{
    int n=100;
    int sum=0;
    for(int i=5;i<=n;i+=5)
    {
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
