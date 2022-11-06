#include <cstring>
#include <iostream>

using namespace std;

class String
{
    unsigned int length;
    char* data;

public:
    String();
    String(const char* init);
    unsigned int get_length();
    const char* cout();
    ~String();
    char operator[](unsigned int pos)
    {
        return data[pos];
    }
};