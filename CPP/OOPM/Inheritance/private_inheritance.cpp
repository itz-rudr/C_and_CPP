//To explain private member function use in inheritance
#include<iostream>
using namespace std;
class base{
	protected: int a,b;
	public: void get(){
				cout<<"Enter two numbers"<<endl;
				cin>>a>>b;
			}
};
class derived: private base{
	public: void out(){
		get();
		cout<<a<<endl<<b<<endl;
	}
};
int main(){
	derived p;
	p.out();
}