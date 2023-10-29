#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream myFile1;
    myFile1.open("Practice/6-2/shahla.txt", ios::out); //write
    if (myFile1.is_open()){
        myFile1 << "hello\n";
        myFile1 << "This is my first file\n";
        myFile1 << "for write in text file\n";
        myFile1.close();

    }
    return 0;
}
