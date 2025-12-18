//To explain how to overload a function 
//In arithmetic assignment
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: complex(int x=0,int y=0){
		a=x;
		b=y;
	}
	void get(){
		cout<<"Enter real and imagenery value"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<" + i"<<b<<endl;
	}
	void operator +=(int t){
		a=a+t;
		b=b+t;
	}
	void operator -=(int t){
		a=a-t;
		b=b-t;
	}
};
int main(){
	complex p;
	p.get();
	p+=5;
	p.out();
	p-=2;
	p.out();
}
