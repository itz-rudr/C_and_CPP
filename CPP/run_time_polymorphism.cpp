//To explain polymorphism in cpp
//Run-Time polymorphism/Dynamic binding/late binding
#include<iostream>
using namespace std;
class base{
	protected: int a,b;
	//using virtual function
	public: virtual void get(){
		cout<<"Enter two no.s ";
		cin>>a>>b;
	}
	virtual void out(){
		cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
	}
};
class derived: public base{
	protected: char name[10];
			   int roll;
	public: void get(){
		cout<<"Enter name and roll:"<<endl;
		cin>>name>>roll;
	}
	void out(){
		cout<<"Name: "<<name<<endl<<"Roll no.: "<<roll<<endl;
	}
};
int main(){
	base *p;
	base b;
	p=&b;
	p->get();
	p->out();
	derived d;
	p=&d;
	p->get();
	p->out();
}