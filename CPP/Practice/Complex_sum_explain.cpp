//to explain how to use a friend function
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: void get(){
		cout<<"Enter real and imagenery value"<<endl;
		cin>>a>>b;
	}
	void out(){
		cout<<a<<" + i"<<b<<endl;
	}
	friend complex sum(complex x,complex y);
};
complex sum(complex x,complex y){
	complex w;
	w.a=x.a+y.a;
	w.b=x.b+y.b;
	return w;
}
int main(){
	complex p,q,t;
	p.get();
	q.get();
	t=sum(p,q);
	p.out();
	q.out();
	cout<<"Sum = ";
	t.out();
}