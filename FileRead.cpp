#include <iostream>
#include "HeaderFiles\FileRead.h"
#include <fstream>
#include <string>

using namespace std;

FileRead::FileRead(const std::string& fileName)
{
    string data;
    ifstream in(fileName);
    if(in.is_open()){
        while (getline(in, data)) {
            cout << data << endl; 
        }
    }
    else{
        cout<<"cannot open file";
    }
}