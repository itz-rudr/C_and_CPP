//To explain file handling in cpp / To write a data in a file
/*
File handling--> This is used to permanently store data in a file
it performs various file operations such as
file open, file write, file read, file close.
syntaxes -->
to open a file --> class_name object("file name");
				   ofstream f("abc.dat") extension does not matter
				   for output file stream
				   ifstream f("abc.dat")
				   for input stream
*/
#include<iostream>
#include<fstream>
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
};
int main(){
	student p;
	ofstream f("abc.dat");
	p.get();
	f.write((char*)(&p),sizeof(p));
	f.close();
}
