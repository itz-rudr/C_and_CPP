//To explain vector class 
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>v1={1,2,3,4,5};//Initialiser list
	print(v1);
	vector<int>v2{6,7,8,9,10};//Uniform initialization
	print(v2);
	vector<int>v3(5);
	print(v3);
	vector<int>v4(5,12);
	print(v4);
}