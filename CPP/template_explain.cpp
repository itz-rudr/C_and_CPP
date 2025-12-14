//To explain template function in cpp
/*
A template in C++ is a feature that allows writing generic and reusable code.
It enables you to create functions or classes that can work with any data type
(int, float, char, user-defined types) without rewriting the same logic again.
*/
#include<iostream>
using namespace std;
template<class t>
void sum(t a,t b){
	t c;
	c=a+b;
	cout<<"Sum: "<<c<<endl;
}
int main(){
	sum(2,5);
	sum(4.3f,2.8f);
}