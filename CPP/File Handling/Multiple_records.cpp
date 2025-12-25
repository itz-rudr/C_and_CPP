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
	char ch;
	student p;
	fstream f;
	f.open("Records",ios::out);
	do{
		p.get();
		f.write((char*)(&p),sizeof(p));
		cout<<"Do you want to continue(y/n)"<<endl;
		cin>>ch;
	}while(ch=='y');
	f.close();
	f.open("Records",ios::in);
	while(f.read((char*)(&p),sizeof(p))){
		p.out();
	}
	f.close();
}