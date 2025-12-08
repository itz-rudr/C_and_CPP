//To explain destructor
/* Destructor:- It is a special member function which is automatically called
   when a object is destroyed. It has a same name as class name with a ~ symbol 
   before it. It is declared in the public section. It can not be overloaded &
   there is no need of passing argument in it. It can be virtual.
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
		test p;
	}
}