#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    ifstream inputFile1("file1.txt");
    ifstream inputFile2("file2.txt");
    ofstream outputFile("output.txt");
    string str1, str2;
    if (!inputFile1.is_open() || !inputFile2.is_open() || !outputFile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    } else { 
        while ((getline(inputFile1, str1)) && (getline(inputFile2, str2))) {
               outputFile << str1 << " " << str2 << endl;
     
        } 
    }
    
    inputFile1.close();
    inputFile2.close();
    outputFile.close();
    
    return 0;
}
