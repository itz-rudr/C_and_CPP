//To explain polymorphism using pointer to object
#include<iostream>
using namespace std;
class test{
	private: int a,b;
	public: void get(){
		cout<<"Enter two no.s: "<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<endl<<b<<endl;
	}
};
int main(){
	test t;
	test *p;
	p=&t;
	p->get();
	p->out();
}