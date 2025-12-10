//To dynamically input and print numbers using n no.s
//also explain the free function
/*
free() is a function in C used to release the dynamically allocated memory 
that was previously allocated using malloc(), calloc(), or realloc().
*/
#include<stdio.h>
#include<malloc.h>
int main(){
	int *a,i,n;
	printf("Enter size: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("Enter numbers:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered numbers:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	free(a);
}