#include <iostream>
using namespace std;

class a{
	public:
		void display(){
			cout<<"A"<<endl;
		}
};

class b{
	public:
		void display(){
			cout<<"B"<<endl;
		}
};

class c:public a,public b{
	public:
		void display(){
			cout<<"C"<<endl;
		}
};

int main(){
	c c1;
	c1.a::display();
	
	return 0;
}
