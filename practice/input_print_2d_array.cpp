//To input and print 2d array/matrix

#include<stdio.h>
int main(){
	int i,j,m,n;
	printf("Enter rows of matrix:\n");
	scanf("%d",&m);
	printf("Enter columns of matrix:\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix:\n");
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
