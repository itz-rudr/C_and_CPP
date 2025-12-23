//To explain how to give size of the object
#include<iostream>
using namespace std;
int main(){
	char ch[80];
	cout<<"Enter name:"<<endl;
	cin.getline(ch,30);
	cout.write(ch,5);
}