#include <iostream>
#include <cstring>
using namespace std;

class student{
	private:
		char *name;
	public:
		//parameterized constructor:
		student(const char *n){
			name=new char(strlen(n)+1);
			strcpy(name,n);
		}
		//copy constructors:
		student(const student& s){
			name=s.name;
		}
		void display(){
			cout<<"Name: "<<name<<endl;
		}
		//destructor:
		~student(){
			delete[] name;
			cout<<"D"<<endl;
		}
};

int main(){
	student s1("Hasan");
	student s2=s1;
	s2.display();
	s1.display();
	return 0;
}
