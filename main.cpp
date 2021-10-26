#include <iostream>
#include "String.hpp"

int main() {
    std::cout << "Start main\n";
    const char* ptr_to_str;
    ptr_to_str = "test"; 
    char test[] = "foo";  /* test = pointer to array of chars */
    char* test2 = test; /* pointer to array made explicit */
    String testString_from_ptr = String(ptr_to_str);
    int len = testString_from_ptr.length();
    std::cout<<"The len of testString is"<<len<<"\n";
    std::cout<<"empty(testString) is " <<testString_from_ptr.empty()<<"\n";
    String emptyString = String("");
    std::cout<<"empty(emptyString) is " <<emptyString.empty()<<"\n";
    
    
    
    String testString = String("test");
    char* underlying_char_ptr = testString.c_str();
    std::cout<<"underlying_char_ptr is " <<underlying_char_ptr<<"\n";
    /*underlying_char_ptr = "new String";
    std::cout<<"underlying_char_ptr is " <<underlying_char_ptr<<"\n";*/
    
    
    const String testString_const = String("test_const");
    const char* underlying_char_ptr_const = testString_const.c_str();
    std::cout<<"underlying_char_ptr_const is " <<underlying_char_ptr_const<<"\n";
    /*underlying_char_ptr_const = "new String";*/
    /*std::cout<<"underlying_char_ptr_const is " <<underlying_char_ptr_const<<"\n";*/
    
    std::cout<<"temp1"<<'\n';
    std::cout<<testString_const<<'\n';

    return 0;
}
