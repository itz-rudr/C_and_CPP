//To print factorial of a number

#include<stdio.h>
int main(){
	int n,fact;
	printf("Enter the number till where to find factorial:\n");
	scanf("%d",&n);
	fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial of %d numbers are %d",n,fact);
}