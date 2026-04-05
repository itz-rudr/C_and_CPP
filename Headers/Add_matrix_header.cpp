//To add two matrices using user defined header file

#include "array.h"
int main(){
	int a[10][10],b[10][10],c[10][10],m,n;
	printf("Enter rows and columns:\n");
	scanf("%d%d",&m,&n);
	printf("Enter elements of matrix A:\n");
	inputmatrix(m,n,a);
	printf("Enter elements of matrix B:\n");
	inputmatrix(m,n,b);
	printf("Addition of matrices:\n");
	addmatrix(m,n,a,b);
}