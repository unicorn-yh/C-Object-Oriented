/* Create a header file (with an extension of ‘.h’). In this file, declare a group of functions by varying the argument 
lists and return values from among the following: void, char, int, and float. 
Now create a .cpp file that includes your header file and creates definitions for all of these functions. 
Each definition should simply print out the function name, argument list, and return type so you know it’s been called. 
Create a second .cpp file that includes your header file and defines int main( ), containing calls to all of your functions. 
Compile and run your program.*/

//ShapeLib.cpp
#include "Shape.h"
#include <iostream>
using namespace std;
int Rectangle::initialize(const void* shapeName){
    name = (unsigned char*)shapeName;
    area = height = width = 0;
    cout << "Function void initialize(const void* shapeName) called. ";
    cout << "Shape Name: " << name << endl;
    return 1;
}
void Rectangle::setLength(float h,float w){
    height = h;
    width = w;
    cout << "Function void setLength(float height,float width) called. ";
    cout << "Height: " << height << "\tWidth: " << width << endl;
}
float Rectangle::calculateArea(){
    float area = height*width;
    cout << "Function float calculateArea() called. ";
    return area;
}
char Rectangle::setId(char* ch){
    charId = ++*ch;
    cout << "Function char setId(char* ch) called. ";
    return charId;
}




