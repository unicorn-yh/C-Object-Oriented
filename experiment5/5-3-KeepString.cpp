//KeepString.cpp
//5-3.cpp
#include <iostream>
using namespace std;
class KeepString{
    public:
        KeepString(string s){
            st=s;
            //cout<<s<<endl;
        }
        char* GetString(){
            return &st[0];
        }
    private:
        string st;
};
int main(){
    KeepString KS("Internal String");
    const char *p=KS.GetString();
    cout<<p<<endl;   //Output is: Internal String
}