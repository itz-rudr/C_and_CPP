//To explain Stack datatype in STL
/*
it is a type of data structure in which it is last in first out
empty():- Checks whether a stack is empty or not : O(1)applies to all
size():- Returns size of the stack
top():- returns a reference to the top most element of the stack
push(x):- Adds the element ' g ' at the top of the stack
pop():- Deletes the most recent entered element of the stack
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	s.push(21);
	s.push(22);
	s.push(24);
	s.push(25);
	int num=0;
	s.push(num);
	while(!s.empty()){
		cout<<s.top()<<" "<<s.size()<<endl;
		s.pop();
	}
}