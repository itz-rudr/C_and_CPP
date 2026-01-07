//To explain vector class 
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v1={1,2,3,4,5};//Initialiser list
	print(v1);
	vector<int>v2{6,7,8,9,10};//Uniform initialization
	print(v2);
	vector<int>v3(5);
	print(v3);
	vector<int>v4(5,12);
	print(v4);
}
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
