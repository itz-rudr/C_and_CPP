//Given a string and n queries in each query you are
//Given a string yes if string is present else print no
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_set<string> s;
	string x;
	int n=4,q;
	cout<<"Enter name:"<<endl;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	cout<<"Enter query:"<<endl;
	cin>>q;
	while(q--){
		cout<<"Enter name to be searched:"<<endl;
		cin>>x;
		if(s.find(x)==s.end())
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
}