#include<stdio.h>
int main(){
	int t,a,p,s1,s2,s3,s4;
	printf("enter marks of subjects:");
	scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
	t=s1+s2+s3+s4;
	a=t/4;
	p=(t*100)/400;
	if(p>=60){
		printf("1 d");}
		else if(p>=50){
		printf("2 d");}
		else{
			printf("fail");}
		return 0;
	}
