//Program to call sinx function using header file

#include "multiplication.h"
int main(){
	int n;
	float x;
	printf("Enter the number and terms in series: ");
	scanf("%f%d",&x,&n);
	printf("Value of series is %f",sinx(x,n));
}