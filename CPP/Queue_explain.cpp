//To explain queue datatype in STL
/*
It is type of datatype in which it is first in first out.
Elements are inserted at the back(end) and are deleted from the front
*/
#include<iostream>
#include<queue>
using namespace std;
void showq(queue<int> q){
	while(!q.empty()){
		cout<<q.front()<<' ';
		q.pop();
	}
	cout<<endl;
}
int main(){
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<"The queue q is:"<<endl;
	showq(q);
	cout<<endl<<"q.size(): "<<q.size();
	cout<<endl<<"q.front(): "<<q.front();
	cout<<endl<<"q.back(): "<<q.back()<<endl;
	q.pop();
	showq(q);
	return 0;
}