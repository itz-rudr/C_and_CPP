//To explain new & delete function
/*
new --> new is a dynamic memory allocation operator in C++.It allocates memory at 
runtime from the heap and returns a pointer to the allocated memory.

delete --> delete is a dynamic memory deallocation operator in C++.It is used 
to free the memory that was previously allocated using the new operator.
*/
#include<iostream>
using namespace std;
class vector{
	private:int *a,n;
	public:vector(){
		
	}
	vector(int x){
		n=x;
		a=new int[n];
	}
	void get(){
		cout<<"Enter number: ";
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	}
	void out(){
		cout<<"Entered numbers:"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i]<<"\t";
		}
		cout<<endl;
	}
	~vector(){
		delete []a;
	}
};
int main(){
	vector p(3);
	p.get();
	p.out();
}