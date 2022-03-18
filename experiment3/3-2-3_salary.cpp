//salary.cpp
#include <iostream>
using namespace std;
class Salary{
  private:
    double wage,subsidy,rent,waterFee,elecFee;
  public:
    Salary(double w,double s,double r,double wf,double ef){
        wage=w;
        subsidy=s;
        rent=r;
        waterFee=wf;
        elecFee=ef;
    }
    Salary(){
        wage=subsidy=rent=waterFee=elecFee=0;
    }
    void setWage(double d){wage=d;}
    void setSubsidy(double d){subsidy=d;}
    void setRent(double d){rent=d;}
    void setWaterFee(double d){waterFee=d;}
    void setElecFee(double d){elecFee=d;}
    double getWage(){return wage;}
    double getSubsidy(){return subsidy;}
    double getRent(){return rent;}
    double getWaterFee(){return waterFee;}
    double getElecFee(){return elecFee;}
    double getRealSalary(){
        return wage+subsidy-rent-waterFee-elecFee;
    }
};
int main(){
    char flag='Y';
    double wage,subsidy,rent,waterFee,elecFee;
    Salary s;
    while(tolower(flag)=='y'){
        cout<<"INPUT:"<<endl;
        cout<<"Worker's wage: "; cin>>wage; s.setWage(wage);
        cout<<"Worker's subsidy: "; cin>>subsidy; s.setSubsidy(subsidy);
        cout<<"Worker's rent: "; cin>>rent; s.setRent(rent);
        cout<<"Worker's water fee: "; cin>>waterFee; s.setWaterFee(waterFee);
        cout<<"Worker's electric fee: "; cin>>elecFee; s.setElecFee(elecFee);

        cout<<"OUTPUT:"<<endl;
        cout<<"Worker's wage: "<<s.getWage()<<endl;
        cout<<"Worker's subsidy: "<<s.getSubsidy()<<endl;
        cout<<"Worker's rent: "<<s.getRent()<<endl;
        cout<<"Worker's water fee: "<<s.getWaterFee()<<endl;
        cout<<"Worker's electric fee: "<<s.getElecFee()<<endl;

        cout<<"CONTINUE (y/n)? ";
        cin>>flag;
        cout<<"-------------------------------------------------\n\n";
    }
    return 0;
}