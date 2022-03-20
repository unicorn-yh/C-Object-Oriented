/*1. Modify the Handle.h, Handle.cpp, and UseHandle.cpp files at the end of Chapter 5 (Page 296-298) 
to use constructors and destructors.*/
//Handle.cpp
#include "Handle.h"
#include "iostream"
using namespace std;
Handle::Handle(int k){
    cout<<"Constructor called. ";
    cout<<"Handle object created."<<endl;
    initialize(k);
}
Handle::~Handle(){
    cout<<"Destructor called. ";
    cout<<"Handle object destroyed."<<endl;
    cleanup();
}
struct Handle::Cheshire{
    int i;
};
void Handle::initialize(int k){
    smile=new Cheshire;
    smile->i=k;
}
void Handle::cleanup(){
    delete smile;
}
void Handle::change(int k){
    smile->i=k;
}
int Handle::read(){
    return smile->i;
}


