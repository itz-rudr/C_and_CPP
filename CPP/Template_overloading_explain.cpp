//To explain template overloading
#include<iostream>
using namespace std;
template<class t>
void write(t a){
	cout<<a<<endl;
}
template<class t>
void write(t a,int n){
	for(int i=1;i<=n;i++){
		cout<<a<<endl;
	}
}
int main(){
	write(2);
	write('a');
	write(3.5);
	write(5.6,3);
	write('a',4);
	write(3,5);
}