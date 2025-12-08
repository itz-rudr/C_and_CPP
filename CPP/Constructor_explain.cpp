/*To explain constructor in cpp
  constructor--> It is a special member function that is called automatically when 
  				a object is created. It has as same name as class. It is declared 
  				in public section. It initializes class's data member. It uses 
  				dynamic initialization. It passes argument and has no return value
  				(Even void) constructor can be overloaded and there a default 
				argument if no argument is given.
*/
#include<iostream>
using namespace std;
class fact{
	private: int n,f;
	public: fact(){
				f=1;
			}
			void get(){
				cout<<"Enter no. ";
				cin>>n;
			}
			void cal(){
				for(int i=1;i<=n;i++){
					f=f*i;
				}
			}
			void out(){
				cout<<"Factorial of "<<n<<" is "<<f<<endl;
			}
};
int main(){
	fact p;
	p.get();
	p.cal();
	p.out();
}