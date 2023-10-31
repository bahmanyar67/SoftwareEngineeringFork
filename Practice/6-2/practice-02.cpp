#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile;
    myFile.open("Practice/6-2/shahla.txt", ios::out); //write
    if (myFile.is_open()){
        myFile << "hello\n";
        myFile << "This is my first file\n";
        myFile << "for write in text file\n";
        myFile.close();

    }
    return 0;
}
