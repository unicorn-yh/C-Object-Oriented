/*3. Implement Mem2.h (Page 347) and make sure that the modified class 
still works with MemTest.cpp(Page 345).*/
//Mem.cpp
#include "Mem.h"
#include <cstring>
using namespace std;
Mem::Mem(int sz){
    size=0;
    mem=0;
    ensureMinSize(sz);
}
Mem::~Mem(){
    delete []mem;
}
int Mem::msize(){
    return size;
}
byte* Mem::pointer(int minSize){
    ensureMinSize(minSize);
    return mem;
}
void Mem::ensureMinSize(int minSize){
    if(size<minSize){
        byte* newMem=new byte[minSize];
        memset(newMem+size,0,minSize-size);
        memcpy(newMem,mem,size);
        delete []mem;
        mem=newMem;
        size=minSize;
    }
}
