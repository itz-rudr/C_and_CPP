//To explain array of pointer

#include<stdio.h>
int main(){
	int a,b,c,*p[10];
	printf("Enter 3 values:\n");
	scanf("%d%d%d",&a,&b,&c);
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	for(int i=0;i<3;i++){
		printf("%d\t",*p[i]);
	}
}