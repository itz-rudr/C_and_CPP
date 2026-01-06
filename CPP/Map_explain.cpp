//To explain maps in STL
#include<bits/stdc++.h>
using namespace std;
void print(auto &m){
	cout<<"Size of map: "<<m.size()<<endl;
	for(auto &i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
int main(){
	map<int,string> m;
	m[1]="One";
	m[3]="Three";
	m[2]="Two";
	//Member function to insert data
	m.insert({4,"Four"});
	//map<int,string>::iterator it;
	for(auto it=m.begin();it!=m.end();it++){
		cout<<"Key: "<<it->first<<" Value: "<<it->second<<endl;
	}
	cout<<"Another way"<<endl;
	m[5];
	print(m);
	m[3]="abc";
	print(m);
	auto it=m.find(5);
	if(it!=m.end()){
		m.erase(it);
	}
	print(m);
	m.clear();
	print(m);
}