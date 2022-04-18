/*设计一个函数模板，实现从 int,char,float,double类型的数组中找出最大值。
为了找出char*数组中最大值，需对该类型进行特化。*/
#include <iostream>
using namespace std;
template <typename T>
T getMax(T a[]){
    T max=a[0];
    for(int i=1;i<5;i++){
        if(a[i]>max)max=a[i];
    } 
    return max;
}
template <typename T>
void print(T a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<"  ";
    } 
    cout<<endl;
}
int main(){
    int int_array[5];
    char char_array[5];
    float float_array[5];
    double double_array[5];
    string string_array[5]={"Hello","How","Are","You","Bob"};
    for(int i=0;i<5;i++)int_array[i]=rand()%100+1;
    for(int i=0;i<5;i++)char_array[i]=rand()%('Z'+1-'A')+'A';
    for(int i=0;i<5;i++)float_array[i]=(rand()%100+1)*0.256;
    for(int i=0;i<5;i++)double_array[i]=(rand()%100+1)*0.5773;
    cout<<"Int Array: ";print(int_array);
    cout<<"Char Array: ";print(char_array);
    cout<<"Float Array: ";print(float_array);
    cout<<"Double Array: ";print(double_array);
    cout<<"String Array: ";print(string_array);
    cout<<"Max Int: "<<getMax<int>(int_array)<<endl;
    cout<<"Max Char: "<<getMax<char>(char_array)<<endl;
    cout<<"Max Float: "<<getMax<float>(float_array)<<endl;
    cout<<"Max Double: "<<getMax<double>(double_array)<<endl;
    cout<<"Max String: "<<getMax<string>(string_array)<<endl;
    return 0;
}