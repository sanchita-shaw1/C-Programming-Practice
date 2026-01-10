#include<stdio.h>
int main(){
	int a,b,c;
    printf("enter a 1st number:");
    scanf("%d",a);
    printf("enter a 2nd number:");
    scanf("%d",b);
    printf("enter a 3rd number:");
    scanf("%d",c);
    if(a>b){
        if(a>c){
            printf("the greatest number is:%d",a);
        }
        else{
            printf("the greatest number is:%d",c);
        }
    }
    else{
        if(b>c){
            printf("the greatest number is:%d",b);
        }
        else{
            printf("the greatest number is:%d",b);
        }
    }
return 0;
}