//To explain auto storage class

//Auto is predefined in c 
#include<stdio.h>
int main(){
	int a=3;
	printf("%d\n",a);
	{
		int b=5;
		printf("%d\n",a);
		printf("%d\n",b);
	}
	printf("%d\n",a);
	//printf("%d",b); this will give error since b is defined in local scope
}