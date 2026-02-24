//Factorial of number using pointer

#include<stdio.h>
int main(){
	int a,f=1,*p,*q;
	printf("Enter numbers:\n");
	scanf("%d",&a);
	p=&a;
	q=&f;
	for(int i=1;i<=a;i++){
		*q=*q*i;
	}
	printf("Factorial of %d is %d",*p,*q);
}