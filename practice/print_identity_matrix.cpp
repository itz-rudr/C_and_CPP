//Program to create and print identity matrix

#include<stdio.h>
int main(){
	int n,m;
	printf("Enter number of rows and columns:\n");
	scanf("%d%d",&n,&m);
	int a[n][m];
	printf("Identity matrix of %d x %d order\n",n,m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==j){
				a[i][j]=1;
			}else{
				a[i][j]=0;
			}
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}