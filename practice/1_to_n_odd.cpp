//To print odd numbers between 1 to n

#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Odd numbers are:\n");
	for(i=1;i<=n;i+=2){
		printf("%d\n",i);
	}
}