//Program to Explain exit function

#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,choice;
	float c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	while(1){
	printf("Menu\n1. Add\n2. Sub\n3. Mul\n4. Div\n5. Exit\nEnter choice:\n");
	scanf("%d",&choice);
		switch(choice){
			case 1: c=a+b;
					printf("Addition: %.0f\n",c);
					break;
			case 2: c=a-b;
					printf("Subtraction: %.0f\n",c);
					break;
			case 3: c=a*b;
					printf("Multiplication: %.0f\n",c);
					break;
			case 4: c=(float)a/b;
					printf("Division: %.2f\n",c);
					break;
			case 5: exit(0);
			default:printf("Invalid Choice\n");		
		}
	}
}