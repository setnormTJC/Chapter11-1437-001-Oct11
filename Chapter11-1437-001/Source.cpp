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
    //private

public: 
    void printTailInfo()
    {
        cout << std::boolalpha; 
        cout << "Tail is bushy: " << isBushy << " TAIL length: " << length << " cm " << endl; 
    }
};

class Nose
{
    bool isPointy; 
    int length; 

public: 
    void printNoseInfo()
    {
        cout << std::boolalpha;
        cout << "Nose is pointy: " << isPointy << " NOSe length: " << length << " cm " << endl;
    }

};

class Animal
{
    string name; 
};

class Dog : public Animal //This is INHERITANCE 
{
    Nose noseObject; //THIS is COMPOSITION!
    Tail tailObject; 

    int dewClawLength = 1; //cm  

public: 
    void printDogDetails()
    {
        noseObject.printNoseInfo();
        tailObject.printTailInfo(); 
        cout << "Dew claw length: " << dewClawLength << " cm " << endl;
    }

};

int main()
{
/*    friend*/ 
    //length
    //cout << "Hello World";
    //cout.operator<<("Hello world?");


    Dog someDog{};

    someDog.printDogDetails(); 

    return 0;
}