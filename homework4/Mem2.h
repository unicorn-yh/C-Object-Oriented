/*4. In class Mem, add a bool moved( ) member function that takes the result of a call 
to pointer( ) and tells you whether the pointer has moved (due to reallocation). 
Write a main( ) that tests your moved( ) member function. Does it make more sense 
to use something like moved( ) or to simply call pointer( ) every time you need to 
access the memory in Mem?*/
//Mem2.h
#ifndef MEM2_H
#define MEM2_H
typedef unsigned char byte;
class Mem2{
    byte* mem;
    byte* location=0;
    byte* tempLocation=0;
    int size;
    void ensureMinSize(int minSize);
    public:
        Mem2(int sz=0); 
        ~Mem2();
        int msize();
        byte* pointer(int minSize=0);
        bool moved();
};
#endif