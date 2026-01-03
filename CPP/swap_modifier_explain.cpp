//To explain swap (modifiers) function in vector class
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
	for(auto &i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v1{1,2,3,4};
	vector<int> v2{5,6,7};
	print(v1);
	print(v2);
	v1.swap(v2);
	cout<<"After Swapping:"<<endl;
	print(v1);
	print(v2);
	vector<int> v3=v1;
	cout<<"Copy elements of v1:"<<endl;
	print(v3);
}