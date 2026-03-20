//To input and print record of one student using class and object

#include<iostream>
using namespace std;
class student{
	private: char a[10];
			 int roll_no;
	public: 
		void get(){
			cout<<"Enter name and roll no."<<endl;
			cin>>a>>roll_no;
		}
		void out(){
			cout<<"Name: "<<a<<endl;
			cout<<"Roll: "<<roll_no<<endl;
		}
};
int main(){
	student rec;
	rec.get();
	rec.out();
	cout<<"Size of object: "<<sizeof(student)<<endl;
}