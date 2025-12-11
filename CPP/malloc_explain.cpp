//To explain dynamic memory allocation using malloc
/*
malloc() stands for Memory Allocation.
It is a function in C (defined in <stdlib.h>) used to dynamically allocate memory 
at runtime. malloc() allocates a block of memory of a specified size (in bytes) 
and returns a pointer to the beginning of that block.
*/
#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,i,n;
	a=(int*)malloc(sizeof(int));
	printf("Enter no. : ");
	scanf("%d",a);
	printf("No. = %d",*a);
	free(a);
}