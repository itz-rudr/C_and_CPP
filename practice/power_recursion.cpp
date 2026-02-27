//To find power of a number

#include<stdio.h>
int power(int n,int x){
	int p;
	if(x==0){
		p=1;
	}else{
		p=n*power(n,x-1);
	}
	return p;
}
int main(){
	int n,x;
	printf("Enter the number and its power: ");
	scanf("%d%d",&n,&x);
	printf("Its value is %d",power(n,x));
}