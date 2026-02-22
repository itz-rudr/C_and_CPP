//To print 1 to n using for loop

#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
}