//To explain clear and erase modifiers in vector class
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v{1,2,3,4,5,6,7,8,9};
	for(auto i=v.begin();i!=v.end();i++){
		if(*i%2==0){
			v.erase(i);
		}
	}
	for(auto it=v.begin();it!=v.end();it++){
		cout<<" "<<*it;
	}
}