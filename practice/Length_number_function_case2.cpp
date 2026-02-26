//To find length of number using function call case 2

#include<stdio.h>
int length(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int l=0;
	for(int i=n;n!=0;n/=10){
		l++;
	}
	return l;
}
int main(){
	printf("Length of number is: %d",length());
}