#include<stdio.h>
int main()
{
    int i,sum=0,n;
    printf("Enter The Value=");
    scanf("%d", &n);
    for ( i=0; i<=n; i++)
    
    {
        if(i%2==0)
        sum=sum+i;
    }    
    printf("%d\n",sum);
	return 0;
}
