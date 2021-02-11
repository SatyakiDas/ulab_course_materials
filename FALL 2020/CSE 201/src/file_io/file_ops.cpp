#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("inp.txt");

    ofstream outputFile;
    outputFile.open("outp.txt");

    int alphabetNumber;

    while(inputFile >> alphabetNumber)
    {
        char ch = 64 + alphabetNumber;
        outputFile << ch << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
