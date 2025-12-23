//To explain precision, width and fill in iostream
#include<iostream>
using namespace std;
int main(){
	cout.precision(5);
	cout<<12.16412<<endl;
	cout.precision(2);
	cout<<12.16412<<endl;
	cout.precision(3);
	cout<<12.16412<<endl;
	cout.width(8);
	cout.fill('*');
	cout<<123;
}