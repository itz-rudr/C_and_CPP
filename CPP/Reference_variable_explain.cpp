//To explain reference variable
#include<iostream>
using namespace std;
int main(){
	int a=3;
	int &b=a;//It is neccesarry to initialise reference variable while declaring.
	cout<<"Address of a = "<<&a<<endl;
	cout<<"Address of b = "<<&b<<endl;
	//b=5;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	//We can't reintialize reference variable.
}