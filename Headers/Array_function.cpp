//To input and print n no.s using function

#include "array.h"
int main(){
	int n,a[10];
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array:\n");
	inputarray(n,a);
	printf("Given array:\n");
	printarray(n,a);
	printf("Biggest element: %d\n",arraybiggest(n,a));
}