#include <stdio.h>

int main(){
    int a, sum =0, rem;
    printf("enter a number:");
    scanf("%d",&a);
    do{
        rem=a%10;
        sum+=rem;
        a/=10;
    } while(a!=0);
    printf("sum of digits:%d\a",sum);
    
    return 0;
}