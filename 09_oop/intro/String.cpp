#include "String.h"
#include <iostream>
#include <cstring>

const char* String::cout(String a)
{
    return data;

    char operator<<(String::data)
    {
        cout << data << endl;
    }

    char operator+(String a, String b)
    {
        cout << a;
        cout << b << endl;
    }
}

String::String()
{
    length = 0;
    data = new char[1];
    data[0] = '\0';
}

String::String(const char* init)
{
    cout << "ctor" << endl;
    length = strlen(init);
    data = new char[length + 1];
    strcpy(data, init);
}

unsigned int String::get_length()
{
    return length;
}

String operator + (string a, string b)
{
    string c = a + b;
    return c;
}

String::~String()
{
    delete[] data;
}

int main()
{
    String a("User's"), b("text");
    String::cout << a + b;
    return 0;
}