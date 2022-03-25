/*2. Use aggregate initialization to create an array of string objects. 
Create a Stack to hold these strings and step through your array, 
pushing each string on your Stack. Finally, pop the strings off your 
Stack and print each one.*/
//Stack4.cpp
#include "Stack4.h"
#include "require.h"
#include <bits/stdc++.h>
using namespace std;
const int bufsize = 80;
Stack4::Stack4(){
    cout<<"Stack object is created and initialized."<<endl;
    initialize();
}
Stack4::~Stack4(){
    cout<<"Stack object is destroyed."<< endl;
    cleanup();
}
void Stack4::Link::initialize(void* dat,Link* nxt){
    data=dat;
    next=nxt;
}
void Stack4::initialize(){
    head=0;
}
void Stack4::cleanup(){
    require(head==0,"Stack not empty");
}
void Stack4::push(void* element){
    Link* newLink=new Link;
    newLink->initialize(element,head);
    head=newLink;
}
void* Stack4::pop(){
    if(head==0)return 0;
    void* dataValue=head->data;
    Link* oldHead=head;
    head=head->next;
    delete oldHead;
    return dataValue;
}
void* Stack4::peek(){
    require(head!=0,"Stack empty");
    return head->data;
}

