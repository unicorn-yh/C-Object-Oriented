#include <iostream>
using namespace std;
class Date{
    public:
        void setDate(void);
        void showDate(void);
        int year;
        int month;
        int day;
};
Date d;
void setDate(void){
    cin>>d.year;
    cin>>d.month;
    cin>>d.day;
}
void showDate(void){
    cout<<d.year<<"/"<<d.month<<"/"<<d.day<<endl;
}
int main(){
    setDate();
    showDate();
    return 0;
}


