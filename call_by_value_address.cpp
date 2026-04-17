//To explain a function call by address or pointer

#include<stdio.h>
void swap(int *p,int *q){
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main(){
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Before swap\na = %d\nb = %d\n",a,b);
	swap(&a,&b);
	printf("After swap\na = %d\nb = %d",a,b);
}