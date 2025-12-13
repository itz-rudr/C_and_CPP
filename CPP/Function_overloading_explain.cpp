//To explain function overloading
//Overloading --> making same function with different datatype passing.
#include<iostream>
using namespace std;
void sum(int a,int b){
	int c;
	c=a+b;
	cout<<"Sum = "<<c<<endl;
}
void sum(float a,float b){
	float c;
	c=a+b;
	cout<<"Sum = "<<c<<endl;
}
int main(){
	int a,b;
	cout<<"Enter two integer numbers: "<<endl;
	cin>>a>>b;
	sum(a,b);
	float p,q;
	cout<<"Enter two float numbers: "<<endl;
	cin>>p>>q;
	sum(p,q);
}