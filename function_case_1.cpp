//Addition of two numbers using function

//case 1:- No argument and return value
//input,calculation,output--->function
//function calling--->main
#include<stdio.h>
void add(){
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Addition of two numbers: %d",c);
}
int main(){
	add();
}