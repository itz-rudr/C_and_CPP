//To explain how to read a text file (line-wise)
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f;
	f.open("vector_explain.cpp",ios::in);
	while(f.getline(ch,80)){
		cout<<ch<<endl;
	}
	f.close();
}