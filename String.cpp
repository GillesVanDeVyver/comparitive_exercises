#include "String.hpp"
#include <stdio.h>
#include <string.h>
#include <iostream>


String::String(const char* str) {
        a = new char[strlen(str)+1];
        strcpy(a,str);
}

String::~String() { 
    delete[] a; 
}

int String::length() const{
    return strlen(a);
}

bool String::empty() const{
    return strlen(a)==0;
}

const char* String::c_str() const{  /* this will be called when String is constructed with a const char**/
    return a;
}

char* String::c_str(){
    return a;
}

std::ostream& operator<<(std::ostream& os, const String& st)
{
    os << st.c_str();
    return os;
}
