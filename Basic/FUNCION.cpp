#include<iostream>
#include<string>

struct Vector2{
    float x, y;
};

int main(){
    Vector2* a = new Vector2();
    Vector2* b = a;
    b -> x = 2;// Influence a and b at the same time 

}