//To explain push_back and pop_back function
#include<bits/stdc++.h>
using namespace std;
void print(auto &v){
	cout<<"Size of vector: "<<v.size()<<endl;
	for(int &i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v{1,2,3,4,5};
	print(v);
	v.push_back(6);
	v.push_back(7);
	print(v);
	v.pop_back();
	print(v);
}