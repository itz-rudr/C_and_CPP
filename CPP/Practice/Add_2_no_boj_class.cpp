//To add two numbers using objects and classes
#include<iostream>
using namespace std;
class sum{
	private: int a,b,c;
	public: 
		void get(){
			cout<<"Enter two numbers: ";
			cin>>a>>b;
		}
		void cal(){
			c=a+b;
		}
		void out(){
			cout<<"Sum is "<<c<<endl;
		}
};
int main(){
	sum p;
	p.get();
	p.cal();
	p.out();
}