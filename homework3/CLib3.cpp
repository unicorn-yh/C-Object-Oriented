//Make a Stash that holds doubles. Fill it with 25 double values, then print them out to the console. 
//（using Stash defined in C04:CppLib.h/CppLib.cpp)
//CLib3.cpp
#include "CLib3.h"
#include <bits/stdc++.h>
using namespace std;
const int increment = 100;
void Stash::initialize(int sz){
    size=sz;
    quantity=0; storage=0; next=0;
}
void Stash::cleanup(){
    if(storage!=0) {
        //cout << "Freeing storage" << endl;
        delete[] storage;
    }
}
void* Stash::fetch(int index){
    assert(index>=0);
    if(index>=next)return 0;
    return &(storage[index*size]);
}
int Stash::add(const void* element){
    if(next>=quantity)inflate(increment);
    int startByte=next*size;
    unsigned char* e=(unsigned char*)element;
    for(int i=0;i<size;i++)
        storage[startByte+i]=e[i];
    next++;
    return(next-1);
}
void Stash::inflate(int increase){
    assert(increase>0);
    int newQuantity=quantity+increase;
    int newByte=newQuantity*size;
    int oldByte=quantity*size;
    unsigned char* temp=new unsigned char[newByte];
    for(int i=0;i<oldByte;i++)
        temp[i]=storage[i];
    delete[] storage;
    storage=temp;
    quantity=newQuantity;
}
int Stash::count(){
    return next;
}

