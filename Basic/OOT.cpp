#include <iostream>
#include <string>

//struct's visibility is public and class is private 
//protected is only the class or struct belong to the family can use it 
//
class Printable
{
    virtual std::string GetName() = 0;
};

class Entity
{
public:
    float X, Y;

    void Move(float xa, float ya){
        X += xa;
        Y += ya;
    }

    virtual std::string GetName() { return "Entity"; }//Virtual function 
    // virtual std::string GetName() = 0; Pure virtual function
};

class Player : public Entity // Inheritance 
{
private:
    std::string m_Name;
public: 
    Player(const std::string& name)
        : m_Name(name){}

    void PrintName(){
        std::cout << m_Name << std::endl;
    }
    std::string GetName() override
    {
        return m_Name;
    }
};

int main()
{

}