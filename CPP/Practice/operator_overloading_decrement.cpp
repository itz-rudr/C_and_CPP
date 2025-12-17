//To explain operator overloading 
//in decrement operator
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
	void operator --(){
		a=a-1;
		b=b-1;
	}
};
int main(){
	complex p(3,2);
	p.out();
	--p;
	p.out();
}