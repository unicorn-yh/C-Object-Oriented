//Hidden.cpp
#include <iostream>
using namespace std;
class Member{
    int i,j,k;
    public:
        Member(int x=0):i(x),j(x),k(x){cout<<"Member"<<endl;}
        ~Member(){cout<<"~Member"<<endl;}
};
class withMember{
    Member q,r,s;
    int i;
    public:
        withMember(int ii):i(ii){cout<<"withMember"<<endl;}
        ~withMember(){cout<<"~withMember"<<endl;}
};
int main(){
    withMember wm(1);
    return 0;
}