//To explain how to read a text file (character only)
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch;
	fstream f;
	f.open("vector_explain.cpp",ios::in);
	while(f.get(ch)){
		cout<<ch<<" ";
	}
	f.close();
}