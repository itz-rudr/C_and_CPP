//To explain class and object in cpp
#include<iostream>
using namespace std;
class test{
	private : int a;
	public : void get(){
				cout<<"Enter no.: ";
				cin>>a;
			}
			 void out(){
				cout<<"a = "<<a<<endl; 	
			}
};
int main(){
	test p;
	p.get();
	p.out();
}
