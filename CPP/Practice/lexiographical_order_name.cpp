//To print unique string in lexiographical order
#include<bits/stdc++.h>
using namespace std;
int main(){
	set<string> s;
	int n=4;
	string x;
	cout<<"Enter name:"<<endl;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	cout<<"String in lexiographical order:"<<endl;
	for(auto &it:s){
		cout<<it<<endl;
	}
}