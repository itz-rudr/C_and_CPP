//To explain friend class
#include<iostream>
using namespace std;
class test1{
	private: int a,b;
	public: void get(){
		cout<<"Enter two no.s"<<endl;
		cin>>a>>b;
	}
	friend class test2;
};
class test2{
	private: int c;
	public: void sum(test1 x){
		c=x.a+x.b;
	}
	void out(){
		cout<<"Sum = "<<c<<endl;
	}
};
int main(){
	test1 p;
	test2 q;
	p.get();
	q.sum(p);
	q.out();
}