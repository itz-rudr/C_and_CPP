//To explain file handling in cpp
//How to read a file
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
	ifstream f("abc.dat");
	f.read((char*)(&p),sizeof(p));
	p.out();
	f.close();
}
