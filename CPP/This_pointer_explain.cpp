//To explain this pointer 
// It is used to initialize a object inside its own class
/*Whenever you create an object of a class, C++ internally passes a 
  hidden pointer named this to all non-static member functions.
  1. To access data members of the current object
  2. To differentiate between local variables and class 
     variables when they have the same name
  3. To return the current object (used in method chaining)
  4. Required in operator overloading
  5. Not available in static functions (because static 
     functions do not belong to objects)
*/
#include<iostream>
using namespace std;
class test{
	private: int a;
	public: test(){
				a=5;//implicit way
				this->a=5;//explicit way
			}
			void out(){
				cout<<a<<endl;
				cout<<this->a<<endl;
				cout<<"Address of the object = "<<this<<endl;
			}
};
int main(){
	test p;
	p.out();
}