//To explain explicit constructor calling
#include<iostream>
using namespace std;
class complex{
	private: int a,b;
	//This also show that constructor can be overloaded
	public: complex(){
				a=0;
				b=0;
			}
			complex(int x){
				a=x;
				b=0;
			}
			complex(int x,int y){
				a=x;
				b=y;
			}
			void out(){
				cout<<a<<" + i"<<b<<endl;
			}
};
//Explicit constructor calling
int main(){
complex p=complex();
complex q=complex(2);
complex t=complex(3,2);
p.out();
q.out();
t.out();
}