//To explain sort in function in STL
/*
this is built in function syntax--> sort(start_address,end_address);
This sort uses introsort which is a mix of quicksort,heapsort and
insertion sort 
*/
#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int a[]={10,56,20,15,7};
	int n=5;
	sort(a,a+n);
	print(a,n);
	cout<<"Decending order"<<endl;
	sort(a,a+n,greater<int>());
	print(a,n);
}