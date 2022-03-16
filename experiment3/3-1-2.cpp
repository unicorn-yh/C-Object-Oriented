#include<iostream>
using namespace std;
class X{
    private:
        int a=0;
        int b;
        const int c=0;
        int &changeC=const_cast<int &>(c);  
        void setA(int i){a=i;}
    public:
        X(){a=b=0;}
        X(int i){a=i;} //move constructor to public 
        X(int i,int j,int k){
            a=i;
            b=j;
            changeC=k;  //change C through pointer
        }
        setC(int k)const{
            changeC+=k;
        } 
        get_setA(int k){setA(k);}
};
int main(){
    X x1;
    X x2(2);   
    X x3(1,2,3);
    x1.get_setA(3);  
    return 0;
}


