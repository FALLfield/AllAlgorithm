#include <iostream>
using namespace std;

class Log
{
public:

private:
    int m_LogLevel;

public:
    void SetLevel(int level){
        m_LogLevel = level; 

    }
    void Warn(const char* message){
        cout << "Warning: " << message << endl; 

    }
};

int main(){
    Log log;

}