#include<iostream>
using namespace std;
class my{
	private: int a,b;
	public: my(int x,int y){
		a=x;
		b=y;
	}
	friend class you;
};
class you{
	public: int max(my tmp){
		return(tmp.a>tmp.b)?tmp.a:tmp.b;
	}
};
int main(){
	my p(4,7);
	you q;
	cout<<q.max(p);
}