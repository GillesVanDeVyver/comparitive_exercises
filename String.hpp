#ifndef CPL_STRING_HPP
#define CPL_STRING_HPP
#include <iostream>

class String {
public:
    String(const char* str="");
    ~String();
    int length() const;
    bool empty() const;
    const char* c_str() const;
    char* c_str();

    private:
        char* a;
};

std::ostream& operator<<(std::ostream& os, const String& st);


#endif
