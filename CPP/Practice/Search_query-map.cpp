//To find query in a given string and print frequency of that string
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,int> m;
	int n;
	string s;
	cout<<"Enter no.: "<<endl;
	cin>>n;
	cout<<"Enter string: "<<endl;
	for(int i=0;i<n;i++){
		cin>>s;
		m[s]++;
	}
	int q;
	cout<<"Enter query no."<<endl;
	cin>>q;
	while(q--){
		cout<<"enter string: "<<endl;
		cin>>s;
		cout<<m[s]<<endl;
	}
}