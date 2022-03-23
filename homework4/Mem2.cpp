/*4. In class Mem, add a bool moved( ) member function that takes the result of a call 
to pointer( ) and tells you whether the pointer has moved (due to reallocation). 
Write a main( ) that tests your moved( ) member function. Does it make more sense 
to use something like moved( ) or to simply call pointer( ) every time you need to 
access the memory in Mem?*/
//Mem2.cpp
#include "Mem2.h"
#include <cstring>
#include <iostream>
using namespace std;
Mem2::Mem2(int sz){
    size=0;
    mem=0;
    ensureMinSize(sz);
}
Mem2::~Mem2(){
    delete []mem;
}
int Mem2::msize(){
    return size;
}
byte* Mem2::pointer(int minSize){
    ensureMinSize(minSize);
    byte**tempLocation=&mem;
    return mem;
}
void Mem2::ensureMinSize(int minSize){
    if(size<minSize){
        byte* newMem=new byte[minSize];
        memset(newMem+size,0,minSize-size);
        memcpy(newMem,mem,size);
        delete []mem;
        mem=newMem;
        size=minSize;
    }
}
bool Mem2::moved(){
    if(location==0){
        location=tempLocation;
        return false;
    }
    if(location==tempLocation) return false;
    location=tempLocation;
    return true;
}
