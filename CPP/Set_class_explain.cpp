//To explain set class 
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main(){
	set<char> a;
	//To insert data into a set object
	//It is a member function named insert
	a.insert('G');
	a.insert('F');
	a.insert('G');
	for(auto &str:a){
		cout<<str<<' ';
	}
	cout<<endl;
	//Descending order set container
	//descending--> greater, Default--> ascending
	set<int,greater<int>> s1;
	s1.insert(10);
	s1.insert(4);
	s1.insert(12);
	s1.insert(5);
	for(auto& i:s1){
		cout<<i<<' ';
	}
}