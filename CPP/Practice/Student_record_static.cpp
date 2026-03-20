//To explain how to input records using static data member & function

#include<iostream>
using namespace std;
class student{
	private: char name[10];
			 int roll;
			 static int n;
	public: student(){
				n=100;
			}
			void get(){
				cout<<"Enter name:"<<endl;
				cin>>name;
				roll=n;
				n++;
			}
			void out(){
				cout<<"Name = "<<name<<endl;
				cout<<"Roll no. = "<<roll<<endl;
			}
};
int student::n;
int main(){
	student p[10];
	int i,n;
	cout<<"Enter size:"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		p[i].get();
	}
	for(i=0;i<n;i++){
		p[i].out();
	}
}