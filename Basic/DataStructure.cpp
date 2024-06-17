#include <iostream>
#include <array>
#include <string> 

class ARRAY {
public:
    void testArray(){
        int example[5]; //Create Array 
        int count = sizeof(example) / sizeof(int); //
        int* ano_example = new int[5];//Create array using pointer
        example[0] = 1;//Set the value of index 1 of example array to 1 
        std::cout << example[0] <<std::endl;
        for(int i = 0; i < 5; i++){
            example[i] = i;
            std::cout << example[i] << " "; 
        }
        int* ptr = example;
        *(ptr + 2) = 6; // *(int*)((char*)ptr + 8) = 6;
        std::cout << example[2] << example[3] << std::endl;
        std::array<int, 5> example2; //Create array using std array. 

    }
    /*void printArray(int[] array){
        for(int i = 0; i < .length(); i++){

        }
        
    }*/

};

class STRING {
public:
    void testString(){
        char* name = "Harry";// It has an empty end character 0 to let compiler know its ending. 
        char name2[] = {'H', 'a', 'r', 'r', 'y', 0};
        name[2] = 'a';
        std::string example = "aaaaa";
        example.append("extra");
        example += "hello!";
        std::cout << example << std::endl; 
    }
    void printString(std::string& string){
        std::cout << string << std::endl; 
    }
};

class STRINGPIECE{
public:
    void testSTRINGPIECE(){
        "Harry";
        const char* name = u8"Harry";// 1 byte
        const wchar_t* name2 = L"Harry"; // 
        const char16_t* name3 = u"Harry";//2 bytes
        const char32_t* name4 = U"Harry";//4 bytes  
    }
};

int main() {
    ARRAY a1;
    a1.testArray();
    STRING a2;
    a2.testString();

}