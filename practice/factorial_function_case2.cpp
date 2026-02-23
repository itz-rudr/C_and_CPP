//Factorail using function calling case 2

#include<stdio.h>
int fact(){
	int a,factorial;
	factorial=1;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		factorial*=i;
	}
	return factorial;
}
int main(){
	printf("Factorial is %d",fact());
}