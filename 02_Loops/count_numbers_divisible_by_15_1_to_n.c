#include"stdio.h"
int main()
{
    int a;
    int count = 0;
    printf("Enter A value:");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
     if(i%15 == 0)
      count = count+1;
      printf("%d",count);
    return 0;
}
