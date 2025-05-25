#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
	ifstream file1("fellow1.txt");
	ifstream file2("fellows.txt");
	ofstream file3("final.txt");
	if(!file1 || !file2 || !file3){
		cerr<<"file not found"<<endl;
		return 1;
	}
	
	string line;
	while(getline(file1,line)){
		file3<<line<<endl;
	}
	while(getline(file2,line)){
		file3<<line<<endl;
	}
	file1.close();
	file2.close();
	file3.close();
	
	ifstream outfile("final.txt");
	if(!outfile){
		cerr<<"file not found"<<endl;
		return 1;
	}
	while(getline(outfile,line)){
		cout<<line<<endl;
	}
	outfile.close();
	cout<<"Data saved"<<endl;
	
	return 0;
}
