#include<stdio.h>
int main()
{
    int i,Sum=0,n;
    scanf("%d",&n);
    for( i=0; i<n; i++)
    {
        Sum=Sum+i;
    }
    printf("%d",Sum);
    return 0;
}