#include <iostream>
#include <fstream>
#include "HeaderFiles\FileWrite.h"

using namespace std;

FileWrite::FileWrite(const std::string& data) {
    writeData(data);
}

void FileWrite::writeData(const std::string& data) {
    ofstream out("output.dat");
    if (out.is_open()) {
        out << data << endl;
        out.close();
    } else {
        cout << "Cannot open file: output.dat" << endl;
    }
}