//To explain how to print vector components with iterator
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a{1,2,3,4,5};
	cout<<"Output of begin and end:"<<endl;
	for(auto i=a.begin();i!=a.end();i++){
		cout<<*i<<" ";
	}
	cout<<"\nOutput of rbegin and rend:"<<endl;
	for(auto ir=a.rbegin();ir!=a.rend();++ir){
		cout<<*ir<<" ";
	}
}