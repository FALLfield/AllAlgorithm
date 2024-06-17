#include <iostream>

#define LOG(X) std::cout << X << std::endl;

int main() {
    char* buffer = new char[9]; //Allocate 9 bytes memory and return a pointer
    delete[] buffer; // Delete buffer 
    int var = 8;
    int* ptr = &var;
    *ptr = 10;// Reverse reference 
    LOG(var);

    //Reference helps pointers more readable

    int a = 5;
    int& a_ref = a; //Build a reference of a 
    a_ref = 2;
    LOG(a_ref);
    std::cin.get();
}