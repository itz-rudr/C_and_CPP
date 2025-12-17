//To explain operator overloading
//using - operator
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: complex(int x=0,int y=0){
		a=x;
		b=y;
	}
	void out(){
		cout<<a<<" + i"<<b<<endl;
	}
	void operator-(){
		a=-a;
		b=-b;
	}
};
int main(){
	complex p(3,2);
	p.out();
	-p;
	p.out();
}