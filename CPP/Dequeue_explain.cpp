//To explain dequeue in STL
/*
In this type of queue you can insert or delete from both ends
*/
#include<iostream>
#include<deque>
using namespace std;
void showdq(deque<int> g){
	deque<int>::iterator it;
	for(it=g.begin();it!=g.end();++it){
		cout<<*it<<' ';
	}
	cout<<endl;
}
int main(){
	deque<int> dq;
	dq.push_back(10);
	dq.push_front(20);
	dq.push_back(30);
	dq.push_front(15);
	cout<<"The deque dq is:"<<endl;
	showdq(dq);
	cout<<endl<<"dq.size(): "<<dq.size();
	cout<<endl<<"dq.max_sixe(): "<<dq.max_size();
	cout<<endl<<"dq.at(2): "<<dq.at(2);
	cout<<endl<<"dq.front(): "<<dq.front();
	cout<<endl<<"dq.back(): "<<dq.back();
	cout<<endl<<"dq.pop_front(): ";
	dq.pop_front();
	showdq(dq);
	cout<<"dq.pop_back(): ";
	dq.pop_back();
	showdq(dq);
	return 0;
}