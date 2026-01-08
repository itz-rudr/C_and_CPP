//To compare two pairs
#include<bits/stdc++.h>
using namespace std;
void print(auto &p){
	cout<<p.first<<" ";
	cout<<p.second<<endl;
}
int main(){
	pair<int,int> pair1=make_pair(90,100);
	pair<int,int>pair2=make_pair(4,30);
	cout<<"Operators with pair and it results in true(1) or false(0)";
	cout<<(pair1<=pair2)<<endl;
	cout<<(pair1>=pair2)<<endl;
	cout<<(pair1>pair2)<<endl;
	cout<<(pair1<pair2)<<endl;
	cout<<(pair1==pair2)<<endl;
	print(pair1);
	print(pair2);
	pair1.swap(pair2);
	cout<<endl<<"After swapping:"<<endl;
	print(pair1);
	print(pair2);
}