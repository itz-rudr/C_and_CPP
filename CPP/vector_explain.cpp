//To explain vector class 
#include<iostream>
#include<vector>
using namespace std;
//This explains how to print a vector
void print(vector<int>v){
	//This is a range loop
	//What happens in this is we will take data of v in i and then print it
	//Range base loop
	for(int i:v){
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	//Method 1 to initialize a vector
	vector<int>v1={1,2,3,4,5};//Initialiser list
	print(v1);
	//Method 2 to initialize a vector
	vector<int>v2{6,7,8,9,10};//Uniform initialization
	print(v2);
	//This methods tells size of vector with zero as its elements
	//Default value--> 0
	vector<int>v3(5);
	print(v3);
	//This method tell size and what is the value of each element
	vector<int>v4(5,12);
	print(v4);
}