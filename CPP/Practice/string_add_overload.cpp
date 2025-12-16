//Program to add two strings using operator overloading
#include<iostream>
using namespace std;
class string_concat{
	private: char name[20];
	public: void input(){
		gets(name);
	}
	void output(){
		cout<<name<<endl;
	}
	string_concat operator +(string_concat tmp){
		string_concat s;
		strcat(name," ");
		strcpy(s.name,name);
		strcat(s.name,tmp.name);
		return s;
	}
};
int main(){
	string_concat s1,s2,s3;
	cout<<"Enter first name: ";
	s1.input();
	cout<<"Enter last name: ";
	s2.input();
	s3=s1+s2;
	cout<<"Complete name is: ";
	s3.output();
}