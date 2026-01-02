//To modify data in a file inside a file
#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
class student{
	private: char name[10];
			 int roll;
	public: void get(){
		cout<<"Enter name and roll"<<endl;
		cin>>name>>roll;
	}
	void out(){
		cout<<"Name = "<<name<<endl;
		cout<<"Roll = "<<roll<<endl;
	}
	int getroll(){
		return(roll);
	}
	char* getname(){
		return(name);
	}
};
int main(){
	int n;
	student p;
	fstream f;
	f.open("Records",ios::in|ios::out|ios::binary);
	cout<<"Enter record no. to be searched"<<endl;
	cin>>n;
	f.seekp((n-1)*sizeof(p),ios::beg);
	p.get();
	f.write((char*)(&p),sizeof(p));
	f.close();
}