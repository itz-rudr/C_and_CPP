//To explain class template with multiple arguments and typecast them
#include<iostream>
using namespace std;
template<class t,class u>
class test{
	private: t a;
			 u b;
	public: void get(){
				cout<<"Enter two elements:"<<endl;
				cin>>a>>b;
			}
			void out(){
				cout<<a<<endl<<b<<endl;
			}
};
int main(){
	test<int,float>p;
	p.get();
	p.out();
	test<float,char>q;
	q.get();
	q.out();
}