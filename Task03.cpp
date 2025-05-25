#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ofstream file;
	file.open("fellows1.txt",ios::in);
	
	if(!file.is_open()){
		cout<<"Error, file not found!"<<endl;
		return 1;
	}
	int recordnumber;
	cout<<"Enter recordnumber(2 for output): ";
	cin>>recordnumber;
	ifstream file1("fellows1.txt");
	string line;
	if(recordnumber==2){
		while(getline(file1,line)){
			cout<<line<<endl;
		}
	}
	
	file.close();
	
	return 0;
}
