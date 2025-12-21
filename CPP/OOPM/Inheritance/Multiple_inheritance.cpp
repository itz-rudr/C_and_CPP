//To explain multiple inheritance
#include<iostream>
using namespace std;
class base1{
	protected:int a;
	public:void get1(){
				cout<<"Enter a = ";
				cin>>a;
			}
};
class base2{
	protected: int b;
	public: void get2(){
		cout<<"Enter b = ";
		cin>>b;
	}
};
class derived: public base1, public base2{
	protected: int c;
	public: void sum(){
				c=a+b;
			}
			void out(){
				cout<<"Sum = "<<c<<endl;
			}
};
int main(){
	derived p;
	p.get1();
	p.get2();
	p.sum();
	p.out();
}