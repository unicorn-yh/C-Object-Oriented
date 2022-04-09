/*小型公司的人员信息管理系统
公司雇员 Employee: Manager,Technician,Salesman,SalesManager
存储这些人员的姓名、编号、级别、当月薪水
计算月薪并显示全部信息
程序要求对所有人员有提升级别的功能。所有人员的初始级别=1，经理=4，技术人员和销售经理=3，销售员=1
月薪计算方法：经理拿固定月薪8000元，技术人员每小时100元的月薪，销售员按当月销售额4%提成
销售经理既拿固定月薪（5000元）也拿销售提成，销售提成=所管辖部门当月销售额的千分之5
*/
#include <iostream>
#include <iomanip>
using namespace std;
class Employee{
    public:
        void setName(string n){name=n;}
        void setId(int i){id=i;}
        void setLevel(int i){level=i;}
        void setSalary(double d){salary=d;}
        void setOccupation(string o){occupation=o;}
        void getDetail(){
            cout<<occupation<<"\t "<<name<<"\t "<<id<<"\t  "<<level<<"\t"<<salary<<endl;
        }
     private:
        string name,occupation;
        int id,level;
        double salary;
};
class Manager:public virtual Employee{
    public:
        Manager(string name,int id){
            setName(name);
            setId(id);
            setLevel(4);
            setSalary(8000);
            setOccupation("Manager");
        }    
};
class Technician:public virtual Employee{
    public:
        Technician(string name,int id,double hours){
            setName(name);
            setId(id);
            setLevel(3);
            setSalary(hours*100);
            setOccupation("Technician");
        }     
};
class SalesManager:public virtual Employee{
    public:
        SalesManager(string name,int id,double departmentSales){
            setName(name);
            setId(id);
            setLevel(3);
            setSalary(5000+departmentSales*0.005);
            setOccupation("Sales Manager");
        }     
};
class Salesman:public virtual Employee{
    public:
        Salesman(string name,int id,double monthSales){
            setName(name);
            setId(id);
            setLevel(1);
            setSalary(monthSales*0.04);
            setOccupation("Salesman");
        }     
};
void upLevel(Employee& e,int i){
    e.setLevel(i);
}
int main(){
    Manager m[]={Manager("Bob",10010),Manager("Steve",10011)};
    Technician t[]={Technician("Alan",10020,65),Technician("Owen",10021,96),Technician("Cyan",10022,77)};
    SalesManager s[]={SalesManager("Tom",10030,50250),SalesManager("Gavin",10031,35000)};
    Salesman w[]={Salesman("Jane",10040,82500),Salesman("Kate",10041,55000),Salesman("Max",10042,66000),Salesman("Nick",10043,75075)};
    upLevel(w[1],2);
    upLevel(w[0],2);
    cout<<setprecision(2)<<fixed;
    cout<<"       小型公司的人员信息管理系统       "<<endl;
    cout<<"OCCUPATION\t NAME\t  ID\tLEVEL\tSALARY"<<endl;
    cout<<"----------\t------\t -----\t-----\t-------"<<endl;
    for(int i=0;i<sizeof(m)/sizeof(m[0]);i++){ m[i].getDetail();}
    for(int i=0;i<sizeof(t)/sizeof(t[0]);i++){ t[i].getDetail();}
    for(int i=0;i<sizeof(s)/sizeof(s[0]);i++){ s[i].getDetail();}
    for(int i=0;i<sizeof(w)/sizeof(w[0]);i++){ w[i].getDetail();}
    return 0;
}