//To explain pair datatype
/*
header file--> <utility>
it is used to store tuples
syntax--> pai<datatype_1,datatype_2>pair_name
*/
#include<iostream>
#include<utility>
using namespace std;
void print(auto &p){
	cout<<p.first<<' ';
	cout<<p.second<<endl;
}
int main(){
	pair<int,int> p1;
	print(p1);
	p1={5,7};
	print(p1);
	pair<int,int> p2{5,9};
	print(p2);
	pair<int,char> p3(1,'a');
	print(p3);
	pair<int,char> p4;
	p4.first=100;
	p4.second='A';
	print(p4);
	pair<string,int> p5;
	p5=make_pair("abc",3);
	print(p5);
	pair<int,int> p6=p1;//copy pair
	print(p6);
	pair<int,int> p7;
	cout<<"Input pair:"<<endl;
	cin>>p7.first>>p7.second;
	print(p7);
}