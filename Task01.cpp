#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("fellows.txt", ios::app);
    if (!file.is_open()) {
        cout << "Error, file not open!" << endl;
        return 1;
    }

    string name, rollno;
    double cgpa;
    char choice;

    do {
        cout << "Enter rollno: ";
        cin >> rollno;
        cin.ignore(); 

        cout << "Enter name: ";
        getline(cin, name); 

        cout << "Enter CGPA: ";
        cin >> cgpa;

        file << rollno << ", " << name << ", " << cgpa << endl;

        cout << "Do you want to add more data (y/n): ";
        cin >> choice;
        cin.ignore(); 

        cout << "Data saved successfully!" << endl << endl;

    } while (choice == 'y' || choice == 'Y');

    file.close();

    return 0;
}

