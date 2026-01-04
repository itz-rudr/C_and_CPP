#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="Welcome";
	string str1="INDIA";
	string str2="BHARAT";
	cout<<str1<<endl<<str2<<endl;
	str1.swap(str2);
	if(str1==str2){ 
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	string str3;
	str3=str1+str2;
	cout<<str3<<endl;
	cout<<str.size()<<endl;
}