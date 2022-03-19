//Create a Stack that holds Stashes. Each Stash will hold five lines from an input file. 
//Create the Stashes using new. Read a file into your Stack, then reprint it in its original 
//form by extracting it from the Stack.
//nested struct in linked list
//Stack.cpp
#include "Stack.h"
#include "require.h"
#include <bits/stdc++.h>
using namespace std;
const int bufsize = 80;
void Stack::Link::initialize(Stash* dat,Link* nxt){
    data=dat;
    next=nxt;
}
void Stack::initialize(){
    head=0;
    Stash* stash=new Stash;
    stash->initialize(sizeof(char)*bufsize);
    Link* newlink=new Link;
    newlink->initialize(stash,head);
    head=newlink;
}
void Stack::cleanup(){
    require(head==0,"Stack not empty");
}
void Stack::push(const void* element){
    if(head->data->count()<5){
        head->data->add(element);
    }
    else{
        ++linkCount;
        Link* newlink=new Link;
        newlink->initialize(head->data,head);
        head=newlink;
        Stash* newStash=new Stash;
        newStash->initialize(sizeof(char)*bufsize);
        head->data=newStash;
        head->data->add(element);
    }
}
void* Stack::pop(){
    if(head==0)return 0;
    void* dataValue;
    Stash* stash=head->data; 
    int i=0; string* cp; string* st=new string; 
    cout << "Fetching Stash " << linkCount--<< ":" << endl;
    while((cp=(string*)stash->fetch(i++))!=0)
        *st+=*cp+"\n";
    stash->cleanup();
    head=head->next;
    return st;
    if(head==0)return 0;
    stash=head->data;
    return st;
}
void* Stack::peek(){
    require(head!=0,"Stack empty");
    return head->data->fetch(head->data->next);
}


