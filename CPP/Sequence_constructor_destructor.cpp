//To explain sequence of constructur & destructor calling 
/*
Constructur is called from top to bottom i.e which object is created first
its constructor is called first.
Destructor is called from bottom to top i.e which object is created last 
its destructor is called last.
*/
#include<iostream>
using namespace std;
class test{
	public: test(){
				cout<<"Constructor called = "<<this<<endl;
			}
			~test(){
				cout<<"Destructor called = "<<this<<endl;
			}
};
int main(){
	{
		cout<<"Constructor calling:"<<endl;
		test p;
		test q;
		test r;
		cout<<endl<<"Destructor calling:"<<endl;
	}
}