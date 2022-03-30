#include<iostream>
using namespace std;
class X{
    private:
        int a=0;
        int b;
        const int c=0;
        int &changeC1=const_cast<int &>(c);  
        const int* changeC=&c;  //pointer to constant
        void setA(int i){a=i;}
    public:
        X(){a=b=0;}
        X(int i){a=i;} //move constructor to public 
        X(int i,int j,const int* k){
            a=i;
            b=j;
            changeC=k;  //change C through pointer
        }
        setC(const int* const k)const{
            changeC=k; //不会
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


