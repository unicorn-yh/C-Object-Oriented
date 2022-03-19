//Create a Stack that holds Stashes. Each Stash will hold five lines from an input file. 
//Create the Stashes using new. Read a file into your Stack, then reprint it in its original 
//form by extracting it from the Stack.
//nested struct in linked list
//Stack.h
#ifndef STACK_H
#define STACK_H
#include "CLib3.cpp"
class Stack{
    public:
        class Link{
            public:
                Stash* data;
                Link* next;
                void initialize(Stash* data,Link* next);
        }*head;
        void initialize();
        void cleanup();
        void push(const void* element);
        void* pop();
        void* peek();
        static int linkCount;
};
int Stack::linkCount=1;
#endif



