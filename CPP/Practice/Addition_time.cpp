//To add two time/hours using object and classes
#include<iostream>
using namespace std;
class time{
	private: int h,m;
	public:
		void get(){
			cout<<"Enter Hour and minutes:"<<endl;
			cin>>h>>m;
		}
		void out(){
			cout<<h<<":"<<m<<endl;
		}
		void sum(time x,time y){
			m=(x.m+y.m)%60;
			h=x.h+y.h+(x.m+y.m)/60;
		}
};
int main(){
	time p,q,t;
	p.get();
	q.get();
	t.sum(p,q);
//	p.out();
//	q.out();
	cout<<"Sum is:";
	t.out();
}