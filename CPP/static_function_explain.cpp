//To explain static data member and static data function
#include<iostream>
using namespace std;
class test{
	private: static int n,a;//static data members
	public: test(){
				n++;
				a++;
			}
			// How to make a static member function-->
			static void out(){
				cout<<"Total number of object = "<<n<<endl;
				cout<<"Total number of alive object = "<<a<<endl;
			}
			~test(){
				a--;
			}
};
//To initialize static data member (globally)
int test::n=0;
int test::a=0;
int main(){
	test p,q,t;
	test::out();
	{
		test u,v;
		test::out();
	}
	test::out();
}