#include <iostream>

class CONST 
{
private:
    int x, y;
public:
    int GetX() const//we can't change value of variables in this function 
    {
        return x; 
    }
    void testConst(){
        const int a = 5; 

        const int* a = new int;// can not change the point easily 
        *a = 2;//Deference 
    }
};
int main(){

}