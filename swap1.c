#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number ");
    scanf("%d %d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swaping: %d %d",a,b);
    return 0;
}