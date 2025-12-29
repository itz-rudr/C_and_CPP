//To search a record in a file using roll no. 
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
	int r;
	int t=0;
	student p;
	fstream f;
	f.open("Records",ios::in|ios::binary);
	cout<<"Enter roll no. to be searched"<<endl;
	cin>>r;
	while(f.read((char*)(&p),sizeof(p))){
		if(p.getroll()==r){
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