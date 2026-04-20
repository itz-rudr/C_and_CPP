//Program to jump to a particular line
//To explain goto statement/jumping statement

#include<stdio.h>
int main(){
	int i=1;
 p:	printf("%d\n",i);
	i++;
	if(i<=10){
		goto p;
	}
}