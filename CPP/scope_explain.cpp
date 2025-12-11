//To explain scope resolutin operator in c++
#include<iostream>
using namespace std;
int a=3;
int main(){
	int a=5;
	cout<<"a = "<<a<<endl;
	cout<<"::a = "<<::a<<endl;
	{
		int a=7;
		cout<<"local a : "<<a<<endl;
		cout<<"global a : "<<::a<<endl;
	}
}