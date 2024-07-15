#include<stdio.h>
int main()
{
    int Age;
    printf("Enter Your Age=");
    scanf("%d", &Age);

if (Age>=18)
{
    printf("You Are eligible To Vote=%d\n", Age);
}
else
{
    printf("YOu are Not Eligible To Vote=%d\n", Age);
}
return 0;
}
