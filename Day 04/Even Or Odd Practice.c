#include<stdio.h>
int main()
{
    int inputnumber,reminder,result
    printf("Enter The Input Number");
    scanf("%d", &inputnumber);
    printf("The Input Number Is=%d\n", inputnumber);
    reminder= inputnumber%2;
    if (reminder==1)
    {
        printf("The Input Number is Even");
    }
   else
   {
    printf("The Input Number Is Odd");
   } 

}
