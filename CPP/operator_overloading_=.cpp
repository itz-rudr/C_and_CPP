//To explain operator overloading
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: complex(){
		
	}
	complex(int x,int y){
		a=x;
		b=y;
	}
	void out(){
		cout<<a<<" + i"<<b<<endl;
	}
	void operator =(complex x){
		a=x.a;
		b=x.b;
	}
	~complex(){}
};
int main(){
	complex p(5,2);
	complex q;
	q=p;
	p.out();
	q.out();
}