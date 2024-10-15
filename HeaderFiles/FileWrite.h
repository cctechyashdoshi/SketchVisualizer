#ifndef FILEWRITE_H
#define FILEWRITE_H

#include <string>

class FileWrite {
public:
    FileWrite(const std::string& data);
    static void writeData(const std::string& data); // Declare the method here
};

#endif