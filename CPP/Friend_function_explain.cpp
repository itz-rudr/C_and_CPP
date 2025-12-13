//To explain friend function
#include<iostream>
using namespace std;
class test2;
class test1{
	private: int a;
	public: void get(){
		cout<<"Enter a: ";
		cin>>a;
	}
	void out(){
		cout<<"a = "<<a<<endl;
	}
	friend void swap(test1 &x,test2 &y);
};
class test2{
	private: int b;
	public: void get(){
		cout<<"Enter b: ";
		cin>>b;
	}	
	void out(){
		cout<<"b = "<<b<<endl;
	}
	friend void swap(test1 &x,test2 &y);
};
void swap(test1 &x,test2 &y){
	int c;
	c=x.a;
	x.a=y.b;
	y.b=c;
}
int main(){
	test1 p;
	test2 q;
	p.get();
	q.get();
	swap(p,q);
	p.out();
	q.out();
}
