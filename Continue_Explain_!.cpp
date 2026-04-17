//To print value from 1 to 100 except 20 to 30.

#include<stdio.h>
int main(){
	int i;
	for(i=1;i<=100;i++){
		if(!(i>=20 && i<=30)){
			continue;
		}
		printf("%3d",i);
	}
}