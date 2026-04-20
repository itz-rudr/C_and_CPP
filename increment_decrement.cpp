//to understand increment and decrement operator.

#include<stdio.h>
int main(){
	int a=10;
	a++; //Post Increment Operator // a+1 // First variable is used than after increment
	printf("%d",a);
	a--; //Post Decrement Operator // a-1 // First variable is used than after decrement
	printf("\n%d",a);
	printf("\n%d",a++);
	printf("\n%d",++a);//Pre increment Operator // First increment than use
	printf("\n%d",a--);
	printf("\n%d",--a);//Pre decrement Operator // First decrement than use
	printf("\n%d",a);
}