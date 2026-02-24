//To print fibonacci series using recursion

#include<stdio.h>
int fibonnaci(int n){
	int f;
	if(n==0||n==1){
		f=n;
	}else{
		f=fibonnaci(n-1)+fibonnaci(n-2);
	}
	return f;
}
int main(){
	int n,f;
	printf("Enter total no. in series: ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		f=fibonnaci(i);
		printf("%3d",f);
	}
}