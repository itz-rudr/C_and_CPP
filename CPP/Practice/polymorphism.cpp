//To explain polymorphism and how it happens using inheritance and virtual 
//function
#include<iostream>
using namespace std;
class A{
	public: virtual void disp(){
		cout<<"Class A"<<endl;
	}
};
class B: public A{
	public: void disp(){
		cout<<"Class B"<<endl;
	}
};
class C:public B{
	public:void disp(){
		cout<<"Class C"<<endl;
	}
};
int main(){
	A ob1,*ptr;
	B ob2;
	C ob3;
	ptr=&ob1;
	ptr->disp();
	ptr=&ob2;
	ptr->disp();
	ptr=&ob3;
	ptr->disp();
}