#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter p:");
    scanf("%d",&p);
    printf("enter r");
    scanf("%d",&r);
    printf("enter t:");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("your simple interest is:%d",si);
return 0;
}