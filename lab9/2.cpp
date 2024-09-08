#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
    
    ifstream inputFile("source.txt");
    ofstream outputFile("destination.txt");
    string str;
    
    if (!inputFile.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    } else {
        while (getline(inputFile, str)) {
            outputFile << str << endl;
        }
    }
    
    inputFile.close();
    outputFile.close();
    
    return 0;
}
