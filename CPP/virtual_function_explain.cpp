//To explain pure virtual function
#include<iostream>
using namespace std;
class graphics{
	public: virtual void draw(){
		cout<<"Graphics draw called"<<endl;
	}
	virtual void show()=0;
};
class ract: public graphics
{
	public: void draw(){
		cout<<"Ract draw called"<<endl;
	}
	virtual void show(){
		cout<<"Ract show called"<<endl;
	}
};
class square: public graphics{
	public: void show(){
		cout<<"Square show called"<<endl;
	}
};
int main(){
	graphics *p;
	ract r;
	p=&r;
	p->draw();
	square s;
	p=&s;
	p->draw();
	p->show();
}