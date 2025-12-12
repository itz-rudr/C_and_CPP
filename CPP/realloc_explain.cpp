//To explain realloc function
/*
realloc() stands for Re-Allocation.
It is a dynamic memory function in C (defined in <stdlib.h>) used to change
the size of a memory block that was previously allocated using malloc(), calloc(), 
or even an earlier realloc().
*/
#include<stdio.h>
#include<malloc.h>
int main(){
	int n;
	char *a;
	printf("Enter size: ");
	scanf("%d",&n);
	a=(char*)malloc((n+1)*sizeof(char));
	printf("Enter name: ");
	scanf("%s",a);
	printf("a = %s\n",a);
	printf("Enter new size: ");
	scanf("%d",&n);
	a=(char*)realloc(a,(n+1));
	printf("Enter name: ");
	scanf("%s",a);
	printf("a = %s\n",a);
	free(a);
}