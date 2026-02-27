//Program for power without using pow function

#include<stdio.h>
int main(){
	int x,n,i,p=1;
	printf("Enter number:\n");
	scanf("%d",&n);
	printf("Enter its power:\n");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		p=p*n;
	}
	printf("%d to the power %d is %d",n,x,p);
}