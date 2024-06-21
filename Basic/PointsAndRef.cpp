#include <iostream>
#include <string>
#include <memory>

#define LOG(X) std::cout << X << std::endl;

class Entity{
public:
    void Print(){

    }
};

class UNIQUE_POINTER{
public:
    void testPointer(){
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();//Scope pointer, when pointer goes out sccope, it will be deleted 
        //We can't copy unique pointer since if two pointer points to the same memory, one is deleted, the memory will be released as well and another pointer will point to nothing
        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); //Shared pointer, it will create a reference counter. when counter goes to 0. the memory is released.
        

        entity->Print();
    }
};

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