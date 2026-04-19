//To input float elements using pointer array

#include<stdio.h>
int main(){
	int n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	float a[n],*p;
	p=a;
	printf("Enter elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",(a+i));
	}
	printf("Elements of array:\n");
	for(int i=0;i<n;i++){
		printf("%u\t%.2f\n",p,*p);
		p++;
	}
}