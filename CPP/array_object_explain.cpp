//To explain how to create array of object
#include<iostream>
using namespace std;
class student{
	private: char name[10];
			 int roll_no;
			 static int n;
	public: student(){
		
			}
			void get(){
				cout<<"Enter name "<<endl;
				cin>>name;
				roll_no=n;
				n++;
			}
			void out(){
				cout<<"Name = "<<name<<endl;
				cout<<"Roll no = "<<roll_no<<endl;
			}
};
int student::n=100;
int main(){
	student p[10];
	int n;
	cout<<"Enter size"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		p[i].get();
	}
	for(int i=0;i<n;i++){
		p[i].out();
	}
}