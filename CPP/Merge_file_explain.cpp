//To merge two file using file handling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char ch[80];
	fstream f,g,h;
	f.open("vector_explain.cpp",ios::in);
	g.open("Copy_data_explain.cpp",ios::in);
	h.open("merge.cpp",ios::out);
	while(f.getline(ch,80)){
		//h.write(ch,80);
		h<<ch<<endl;
	}
	f.close();
	while(g.getline(ch,80)){
		//h.write(ch,80);
		h<<ch<<endl;
	}
	g.close();
	h.close();
	h.open("merge.cpp",ios::in);
	while(h.getline(ch,80)){
		cout<<ch<<endl;
	}
	h.close();
}