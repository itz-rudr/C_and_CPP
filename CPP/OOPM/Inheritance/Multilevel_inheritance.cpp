//To explain multilevel inheritance
#include<iostream>
using namespace std;
class base{
	protected: int a,b;
	public: void get(){
				cout<<"Enter two numbers"<<endl;
				cin>>a>>b;
			}
};
class derived1:public base{
	protected: int c;
	public: void sum(){
				c=a+b;
			}
};
class derived2:public derived1{
	public: void out(){
				cout<<"Sum = "<<c<<endl;
			}
};
int main(){
	derived2 p;
	p.get();
	p.sum();
	p.out();
}