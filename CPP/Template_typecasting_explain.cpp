//To input two numbers using class template
//To explain how to typecast in a template
#include<iostream>
using namespace std;
template<class t>
class test{
	private:t a,b;
	public: void get(){
				cout<<"Enter two numbers:"<<endl;
				cin>>a>>b;
			}
			void out(){
				cout<<a<<endl<<b<<endl;
			}
};
int main(){
	test<int>p;
	p.get();
	p.out();
	test<float>q;
	q.get();
	q.out();
}