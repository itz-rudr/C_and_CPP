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
	char n[40];
	int t=0;
	student p;
	fstream f;
	f.open("Records",ios::in|ios::binary);
	cout<<"Enter name to be searched"<<endl;
	cin>>n;
	while(f.read((char*)(&p),sizeof(p))){
		if(strcmp(p.getname(),n)==0){
		t=1;
		p.out();
		break;	
		}
	}
	if(t==0){
		cout<<"Record not found..."<<endl;
	}
	f.close();
}