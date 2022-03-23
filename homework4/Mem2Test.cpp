/*4. In class Mem, add a bool moved( ) member function that takes the result of a call 
to pointer( ) and tells you whether the pointer has moved (due to reallocation). 
Write a main( ) that tests your moved( ) member function. Does it make more sense 
to use something like moved( ) or to simply call pointer( ) every time you need to 
access the memory in Mem?*/
//Mem2Test.cpp
#include "Mem2.cpp"
#include <cstring>
using namespace std;
class MyString{   
    Mem2* buf;
    public:
        MyString();
        MyString(char* str);
        ~MyString();
        void concat(char* str);
        void print(ostream& os);
        void getLocation();
};
MyString::MyString(){
    buf=0;
}
MyString::MyString(char* str){
    buf=new Mem2(strlen(str)+1);
    strcpy((char*)buf->pointer(),str);
}
MyString::~MyString(){
    delete buf;
}
void MyString::concat(char* str){
    if(!buf)buf=new Mem2;
    strcat((char*)buf->pointer(buf->msize()+strlen(str)+1),str);
}
void MyString::print(ostream& os){
    if(!buf)return;
    os << buf->pointer() << endl;
}
void MyString::getLocation(){
    cout<< "【"<<&buf;
    if(buf->moved())cout<<". Location is moved."<<endl;
    else cout<<". Location remains.】"<<endl;
}
char* convertToChar(string str){
    return &str[0];
    //return const_cast<char*>(str.c_str());
}
int main(){  
    MyString s(convertToChar("Pretty string"));
    s.print(cout); s.getLocation();
    s.concat(convertToChar(" with some additional stuff."));
    s.print(cout); s.getLocation();
    MyString s2;
    s2.concat(convertToChar("Second string using default constructor."));
    s2.print(cout); s.getLocation();
    return 0;
}