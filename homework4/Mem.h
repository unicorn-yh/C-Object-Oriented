/*3. Implement Mem2.h (Page 347) and make sure that the modified class 
still works with MemTest.cpp(Page 345).*/
//Mem.h
#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;
class Mem{
    byte* mem;
    int size;
    void ensureMinSize(int minSize);
    public:
        Mem(int sz=0); 
        ~Mem();
        int msize();
        byte* pointer(int minSize=0);
};
#endif