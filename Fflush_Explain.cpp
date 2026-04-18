//Program to Explain fflush function

#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b;
	float c;
	char choice;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	while(1){
	printf("Menu\n+ Add\n- Sub\n* Mul\n/ Div\nE Exit\nEnter choice:\n");
	fflush(stdin);
	scanf("%c",&choice);
		switch(choice){
			case '+': c=a+b;
					printf("Addition: %.0f\n",c);
					break;
			case '-': c=a-b;
					printf("Subtraction: %.0f\n",c);
					break;
			case '*': c=a*b;
					printf("Multiplication: %.0f\n",c);
					break;
			case '/': c=(float)a/b;
					printf("Division: %.2f\n",c);
					break;
			case 'E':
			case 'e': exit(0);
			default:printf("Invalid Choice\n");		
		}
	}
}