/*2. Use aggregate initialization to create an array of string objects. 
Create a Stack to hold these strings and step through your array, 
pushing each string on your Stack. Finally, pop the strings off your 
Stack and print each one.*/
//Stack4.h
#ifndef STACK4_H
#define STACK4_H
#include <bits/stdc++.h>
using namespace std;
class Stack4{
    public:
        class Link{
            public:
                void* data;
                Link* next;
                void initialize(void* data,Link* next);
        }*head;
        Stack4();
        ~Stack4();
        void initialize();
        void cleanup();
        void push(void* element);
        void* pop();
        void* peek();
};
#endif



