//To explain how to overload a function 
//Using + operator
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
	complex operator +(complex x){
		complex w;
		w.a=a+x.a;
		w.b=b+x.b;
		return w;
	}
	complex operator -(complex x){
		complex w;
		w.a=a-x.a;
		w.b=b-x.b;
		return w;
	}
};
int main(){
	complex p,q,t;
	p.get();
	q.get();
	t=p+q;
	t.out();
	t=p-q;
	t.out();
}
