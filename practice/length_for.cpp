//To print length of a number using for loop

#include<stdio.h>
int main(){
	int n;
	int l=0;
	printf("Enter a Number:\n");
	scanf("%d",&n);
	for(n=n;n!=0;n/=10,l++){	
	}
	printf("Length of number is %d",l);
}