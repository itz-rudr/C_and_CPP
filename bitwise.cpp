//Bitwise Operator

#include<stdio.h>
int main(){
	int a=4;
	int b=5;
	//To explain & operator
	printf("%d\n",a&b);// & and operator gives true value when both are true
	//To explain | operator
	printf("%d\n",a|b);// | OR operator gives true when any one value is true
	//to explain ^ operator 
	printf("%d\n",a^b);//Gives value low when both are high
	//To explain one's complement
	printf("%d\n",~a);//gives ~a= -(a+1)
	//To explain right shift
	printf("%d\n",10>>2);//this will shift two bits to right
	//To explain left shift
	printf("%d\n",10<<2);//this will shift two bits to left
}