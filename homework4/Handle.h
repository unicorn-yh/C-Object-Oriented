/*1. Modify the Handle.h, Handle.cpp, and UseHandle.cpp files at the end of Chapter 5 (Page 296-298) 
to use constructors and destructors.*/
//Handle.h
#ifndef HANDLE_H
#define HANDLE_H
class Handle{  
    struct Cheshire;
    Cheshire* smile;
    public:
        Handle(int);
        ~Handle();
        void initialize(int);
        void cleanup();
        int read();
        void change(int);
};
#endif