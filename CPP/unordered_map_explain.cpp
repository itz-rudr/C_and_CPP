//To explain unordered map
#include<bits/stdc++.h>
using namespace std;
void print(auto &m){
	cout<<"Size of map: "<<m.size()<<endl;
	for(auto &i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
}
int main(){
	unordered_map<int,string> m;
	m[1]="One";
	m[3]="Three";
	m[2]="Two";
	print(m);
}