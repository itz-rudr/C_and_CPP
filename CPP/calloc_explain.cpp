//To explain calloc function
/*
calloc() stands for Contiguous Allocation.
It is a dynamic memory allocation function in C (defined in <stdlib.h>) 
that allocates multiple memory blocks and initializes all bytes to zero.
*/
#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,i,n;
	printf("Enter size: ");
	scanf("%d",&n);
	a=(int*)calloc(n,sizeof(int));
	printf("Enter numbers:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	free(a);
}