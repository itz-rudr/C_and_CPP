//To explain multimap
#include<bits/stdc++.h>
using namespace std;
int main(){
	multimap<int,string> m;
	m.insert({1,"One"});
    m.insert({3,"Three"});
    m.insert({2,"Two"});
    m.insert({2,"Nine"});
	for(auto &i:m){
		cout<<i.first<<' '<<i.second<<endl;
	}
}