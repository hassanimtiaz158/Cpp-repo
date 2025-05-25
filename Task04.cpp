#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    
    ifstream source("fellows1.txt");
    ofstream dest("fellows3.txt");

    if (!source || !dest) {
        cerr << "Error opening source or destination file." << endl;
        return 1;
    }

    string line;
    

    while (getline(source, line)) {
        dest << line << endl;
        records.push_back(line); 
    }

    source.close();
    dest.close();

    if (records.size() >= 2) {
        records[records.size() - 2] = "BCDF99H999 Bara Admi 4.00";
    } else {
        cerr << "Not enough records to modify 2nd last entry." << endl;
        return 1;
    }

   
    ofstream outFile("fellows1.txt", ios::out | ios::trunc); 
    if (!outFile) {
        cerr << "Error opening fellows2.txt for writing." << endl;
        return 1;
    }

    for (const auto& rec : records) {
        outFile << rec << endl;
    }

    outFile.close();

    cout << "Successfully copied and modified the file." << endl;

    return 0;
}

