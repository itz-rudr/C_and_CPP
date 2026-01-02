//To delete a record from a file using file handling
/*
To delete a function there is a pre made function named remove.
syntax:- remove("File name");
To rename a file there is a pre made function named rename.
syntax:- rename("file to be renamed","New name of file");
*/
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
	fstream f,g;
	f.open("Records",ios::in);//Reading data from this file
	g.open("New_records",ios::out);//Writing data into this file
	cout<<"Enter roll no. to be deleted:"<<endl;
	cin>>n;
	while(f.read((char*)(&p),sizeof(p))){
		if(p.getroll()!=n){
			g.write((char*)(&p),sizeof(p));
		}
	}
	f.close();
	g.close();
	remove("Records");
	rename("New_records","Records");
}