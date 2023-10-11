#include <iostream>

using namespace std;

//class Rectangle
//{
//    //suppose you make the following modification:
//protected:
//    double length;
//    double width;
//    //...
//
//};
//
//class Box : public Rectangle
//{
//    double height; 
//
//    //length = 2;
//
//};


class Tail
{
    bool isBushy; 
    int length; 
};

class Nose
{
    bool isPointy; 
    int length; 
};
class Animal
{
    string name; 
};

class Dog : public Animal //This is INHERITANCE 
{
    Nose noseObject; //THIS is COMPOSITION!
    Tail tailObject; 
};

int main()
{
/*    friend*/ 
    //length
    //cout << "Hello World";
    cout.operator<<("Hello world?");


    return 0;
}