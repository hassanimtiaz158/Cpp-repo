#include <iostream>
using namespace std;

class A{
	public:
		virtual void display(){
			cout<<"A"<<endl;
		}
};

class B: virtual A{
	public:
		void display() override {
			cout<<"B"<<endl;
		}
};

class C: virtual public A{
	public:
		void display() override{
			cout<<"C"<<endl;
		}
};

class D: public B,public C{
	public:
		void display()override{
			cout<<"D"<<endl;
		}
};

int main(){
	D obj;
	obj.display();
	
	A* a=&obj;
	a->display();
	delete a;
	
	return 0;
}
