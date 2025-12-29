//To find current position of pointer in a file 
/*
There is a pre made function for it which we can use
tellg():- To get and read a record
tellp():- To put and write a file
syntax:- int object.tellg()
*/
//To search a record in a file using a record no.
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
	f.open("Records",ios::in);
	int t;
	t=f.tellg();
	cout<<"Position: "<<t<<endl;
	f.read((char*)(&p),sizeof(p));
	t=f.tellg();
	p.out();
	cout<<"Position: "<<t<<endl;
	f.read((char*)(&p),sizeof(p));
	p.out();
	f.close();
}