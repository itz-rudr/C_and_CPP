//To explain how to insert and delete data  in multiset
#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_multiset<int> s;
	s.insert(12);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(90);
	s.insert(85);
	s.insert(45);
	unordered_multiset<int>::iterator it1,it2;
	cout<<"Multiset elements after sort"<<endl;
	for(auto it=s.begin();it!=s.end();it++){
		cout<<*it<<' ';
	}
	cout<<endl;
	it1=s.find(10);
	it2=s.find(90);
	s.erase(it1,it2);
	cout<<"Multiset elements after erase:"<<endl;
	for(auto i:s){
		cout<<i<<' ';
	}
	cout<<endl;
}