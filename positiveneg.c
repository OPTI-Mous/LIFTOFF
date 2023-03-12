#include <stdio.h>

int main()
{
    float a;
printf("\nEnter a number:");
scanf("%f",&a);

if(a==0)
printf("\nEntered number is zero");

else if(a>0)
printf("\nEntered number is a positive number");

else if(a<0)
printf("\nEntered number is a negative number");

return 0;
}