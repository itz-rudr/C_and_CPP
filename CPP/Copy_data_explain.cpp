//To explain how to copy a whole file from one to another
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f,g;
	f.open("vector_explain.cpp",ios::in);
	g.open("Copy.cpp",ios::out);
	while(f.getline(ch,80)){
		g.write(ch,80);
	}
	f.close();
	g.close();
}