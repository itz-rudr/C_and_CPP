//To explain how function overloading works
#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
	return a;
	else
	return b;
}
float max(float a,float b){
	return((a>b)?a:b);
}
char max(char a,char b){
	return((a>b)?a:b);
}
int main(){
	cout<<max(3,5)<<endl;
	cout<<max(3.4f,1.2f)<<endl;
	cout<<max('A','a')<<endl;
}