//To explain object as a fuction argument
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: 
		void get(){
			cout<<"Enter real and imagenery value"<<endl;
			cin>>a>>b;
		}
		void out(){
			cout<<a<<" + i"<<b<<endl;
		}
		void sum(complex x,complex y){
			a=x.a+y.a;
			b=x.b+y.b;
		}
};
int main(){
	complex p,q,t;
	p.get();
	q.get();
	t.sum(p,q);
	p.out();
	q.out();
	cout<<"Sum is: ";
	t.out();	
}