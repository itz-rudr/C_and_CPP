//To explain array in c

#include<stdio.h>
int main(){
	int a[10],n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of array are:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}