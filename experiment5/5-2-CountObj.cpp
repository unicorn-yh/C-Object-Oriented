/*Define a class of CSmart which can print how many objects of CSmart there\
are in the program.*/
//CountObj.cpp
//5-2.cpp
#include <iostream>
using namespace std;
class CSmart{
    public:
        CSmart(){
            ++count;
            if (count==1) cout<<count<<" object"<<endl;
            else cout<<count<<" objects"<<endl;
            
        }
        ~CSmart(){
            --count;
            if (count==1||count==0) cout<<count<<" object"<<endl;
            else cout<<count<<" objects"<<endl;
        }
    private:
        static int count;
};
int CSmart::count=0;
void DoSomething(){
    CSmart s;
}
CSmart s1;
int main(){
    CSmart s2;
    DoSomething();
    CSmart* s3=new CSmart;
    delete s3;
    return 0;
}