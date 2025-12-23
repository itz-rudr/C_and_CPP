//To explain componenets of iostream file
#include<iostream>
using namespace std;
int main(){
	char ch1[80];
	cout<<"Enter name: "<<endl;
	cin.getline(ch1,30);
	cout.write(ch1,30);
}