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
	cout<<"Enter Record no. to be searched:"<<endl;
	cin>>n;
	//From this function we can travese through different records
	/*
	seekg() to traverse a file pointer to read a file 
	seekp() to traverse a file pointer and write in a file
	syntax:- object.seekg(no. of bytes,mode)
	mode:- beg (Beginning), end (end of file), cur (For current location of pointer)
	*/
	f.seekg((n-1)*sizeof(p),ios::beg);
	f.read((char*)(&p),sizeof(p));
	p.out();
	f.close();
}