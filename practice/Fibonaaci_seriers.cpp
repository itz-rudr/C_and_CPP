//To print fibonacci series

#include<stdio.h>
int main(){
	int n,a=0,b=1;
	printf("Enter the length of series:\n");
	scanf("%d",&n);
	printf("%4d%4d",a,b);
	for(int i=1;i<=n-1;i++){
		int c=a+b;
		printf("%4d",c);
		a=b;
		b=c;
	}
}