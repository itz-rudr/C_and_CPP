//To explain default constructor
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
};
int main(){
	complex p;
	complex q(2);
	complex t(3,2);
	p.out();
	q.out();
	t.out();
}