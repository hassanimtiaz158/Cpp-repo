#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream file;
	file.open("fellows1.txt",ios::app);
	if(!file.is_open()){
		cout<<"Error,file not open!"<<endl;
		return 1;
	}
	
	string rollno,name;
	double cgpa;
	char choice;
	
	do{
		cout<<"Enter rollno: ";
		cin>>rollno;
		
		cout<<"Enter name: ";
		cin.ignore();
		getline(cin,name);
		
		cout<<"Enter cgpa: ";
		cin>>cgpa;
		
		file<<rollno<<" "<<name<<"     "<<cgpa<<endl;
		cout<<"Do you want to enter more data: (y/n): ";
		cin>>choice;
		
		cout<<"Data saved"<<endl;
		
	}while(choice=='y' || choice=='Y');
	
	file.close();
	
	
	return 0;
}
