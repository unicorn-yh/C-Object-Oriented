/*3. Implement Mem2.h (Page 347) and make sure that the modified class 
still works with MemTest.cpp(Page 345).*/
//MemTest.cpp
#include "Mem.cpp"
#include <cstring>
#include <iostream>
using namespace std;
class MyString{   
    Mem* buf;
    public:
        MyString();
        MyString(char* str);
        ~MyString();
        void concat(char* str);
        void print(ostream& os);
};
MyString::MyString(){
    buf=0;
}
MyString::MyString(char* str){
    buf=new Mem(strlen(str)+1);
    strcpy((char*)buf->pointer(),str);
}
MyString::~MyString(){
    delete buf;
}
void MyString::concat(char* str){
    if(!buf)buf=new Mem;
    strcat((char*)buf->pointer(buf->msize()+strlen(str)+1),str);
}
void MyString::print(ostream& os){
    if(!buf)return;
    os << buf->pointer() << endl;
}
char* convertToChar(string str){
    return &str[0];
    //return const_cast<char*>(str.c_str());
}
int main(){  
    MyString s(convertToChar("Pretty string"));
    s.print(cout);
    s.concat(convertToChar(" with some additional stuff."));
    s.print(cout);
    MyString s2;
    s2.concat(convertToChar("Second string using default constructor."));
    s2.print(cout);
    return 0;
}