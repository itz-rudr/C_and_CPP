//To explain inheritance 
/*
Inheritance-->Inheritance is an object-oriented programming (OOP) feature 
in C++ that allows one class (called the derived class) to acquire the 
properties and behaviors (data members and member functions) of another 
class (called the base class).
their are to classes in it:-
1. Derived class -> child class : which gets the properties of another class
2. Base class -> parent class : from which we get properties
inheritance helps in reusability of code.
it works with the help of access modifiers.There are three of them:-
1. public:- everyone can access data from anywhere.
2. protected:- only child class can access the data.
3. private:- no one can access the data.
*/
#include<iostream>
using namespace std;
class base{
	protected:int a,b;
	public: void get(){
				cout<<"Enter two numbers:"<<endl;
				cin>>a>>b;
			}
};
class derived:public base{
	public:void out(){
				cout<<a<<endl<<b<<endl;
			}
};
int main(){
	derived p;
	p.get();
	p.out();
}