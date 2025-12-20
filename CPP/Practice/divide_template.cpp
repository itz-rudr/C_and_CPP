//to divide two numbers with use of template class
#include<iostream>
using namespace std;
template<class t>
class test{
	private:t a,b,c;
	public: void get(){
				cout<<"Enter two numbers:"<<endl;
				cin>>a>>b;
			}
			void out(){
				c=a/b;
				cout<<"Value of c: "<<c<<endl;
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