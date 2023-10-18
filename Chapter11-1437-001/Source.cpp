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

class Animal
{
    string name;
};

/// <summary>
/// Tails have isBushy and length (bool and int) 
/// </summary>
class Tail
{
    bool isBushy; 
    int length; 
    //private

public:
    Tail()
    {

    };

    Tail(bool isBushy, int length)
        :isBushy(isBushy), length(length)
    {
        //Empty!
    };

    void printTailInfo()
    {
        cout << std::boolalpha; 
        cout << "Tail is bushy: " << isBushy << " TAIL length: " << length << " cm " << endl; 
    }
};


/// <summary>
/// Noses have `isPointy` and `length` (bool and int)  
/// </summary>
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

    Nose()
    {

    };

    Nose(bool isPointy, int length)
        :isPointy(isPointy), length(length)
    {

    };

};


class Dog //: public Animal //This is INHERITANCE 
{
    int dewClawLength = 1; //cm  

    Nose noseObject; //THIS is COMPOSITION!
    Tail tailObject; 

public:
    Dog() //default constructor (initializes integers to 0 or "garbage values" 
        //bools get autoinitialized to false
    {
    };

    /// <summary>
    /// 
    /// </summary>
    /// <param name="dClawLength"></param>
    /// <param name="isP"></param>
    /// <param name="nLength"></param>
    /// <param name="isB"></param>
    /// <param name="tLength"></param>
    Dog(int dClawLength,
        bool isP, int nLength,
        bool isB, int tLength)
        :noseObject(isP, nLength), tailObject(isB, tLength)
    {
        dewClawLength = dClawLength; 
    }


    void printDogDetails()
    {
        noseObject.printNoseInfo();
        tailObject.printTailInfo(); 
        cout << "Dew claw length: " << dewClawLength << " mm " << endl;
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

    cout << "\n\n\n";

    Dog doris{ 13, true, 102, false, 457 };
    
    doris.printDogDetails();

    //doris.
    
    //myDog.printDogDetails(); 

    return 0;
}