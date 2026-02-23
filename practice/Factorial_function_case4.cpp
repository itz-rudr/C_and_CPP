//To find factorial of a number using function call case 4

#include<stdio.h>
int fact(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
}