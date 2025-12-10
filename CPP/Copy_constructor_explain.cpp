//To explain copy constructor
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	public: complex(){
				a=0;
				b=0;
			}
			complex(int x,int y){
				a=x;
				b=y;
			}
			//You can make copy constructor using reference varialble
			complex(complex &x){
				a=x.a;
				b=x.b;
			}
			void out(){
				cout<<a<<" + i"<<b<<endl;
			}
			~complex(){
				//cout<<"cleared"<<endl;
			}
};
int main(){
	complex p(3,2);
	complex q(p);
	p.out();
	q.out();
}