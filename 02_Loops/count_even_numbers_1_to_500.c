#include"stdio.h"
int main()
{
    int n=500;
    int count = 0;
    for(int i=2;i<=n;i+=2)
    {
        count= count+1;
    }
    printf("%d",count);
    return 0;
}
