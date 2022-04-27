/*线性表抽象数据类型，编写模板的派生类：顺序表类，并在main()中使用该模板进行测试*/
//LinearList.cpp
#include "LinearList.h"
#include <bits/stdc++.h>
using namespace std;
const int size=100;

template <class T>
class SequenceList:public LinearList<T>{
    public:
        SequenceList(int s=size){
            data=new T[size];
            maxSize=s;
            last=-1;
        }
        SequenceList(const SequenceList<T>&L);
        SequenceList<T>& operator=(SequenceList<T>&L);
        ~SequenceList(){
            delete []data;
        }
        int Size() const{     //表容量
            return maxSize;
        }   
        int Length() const{  //表长
            return last+1;
        }
        int Search(T& x) const{ //搜索x值
            for(int i=0;i<=last;i++){
                if (data[i]==x) return i+1;
            }
            return 0;
        }
        bool getData(int i,T& x) const{ //获取第i项
            if(i>0&&i<=last+1) {
                x=data[i-1];
                return true;
            }
            else return false;
        }
        void setData(int i,T& x){ //修改第i项
            if(i>0&&i<=last+1) data[i-1]=x;
            else {
                cout<<"error"<<endl;
                exit(1);
            }
        }
        bool IsEmpty() const{ //判表空
            if(last==-1)return true;
            else return false;
        }
        bool IsFull() const{  //判表满
            if(last==maxSize-1)return true;
            else return false;
        }
        void Sort(bool asc);   //排序
        void input(T& x);  //输入
        void output();  //输出
        bool Insert(int i,T& x); //第i项后插入x
        bool Remove(int i); //删除第i项
    protected:
        T* data;
        int maxSize,last;
        void resize(int newSize);
};

template<class T>
SequenceList<T>::SequenceList(const SequenceList<T>&L){
    maxSize=L.maxSize;
    last=L.last;
    data=new T[maxSize];
    if(data==NULL){
        cout<<"error"<<endl;
        exit(1);
    }
    T value;
    for(int i=0;i<=last;i++){
        L.getData(i+1,value);
        setData(i,value);
    }
}
template<class T>
SequenceList<T>& SequenceList<T>::operator=(SequenceList<T>&L){
    maxSize=L.maxSize;
    last=L.last;
    data=new T[maxSize];
    if(data==NULL){
        cerr<<"error"<<endl;
        exit(1);
    }
    T value;
    for(int i=0;i<=last;i++){
        L.getData(i+1,value);
        setData(i,value);
    }
    return *this;
}
template<class T>
void SequenceList<T>::Sort(bool asc){
    T temp;
    if(asc){
        for(int i=0;i<=last;i++){
            for(int j=0;j<=last-i;j++){
                if(data[j]>=data[j+1]){
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
        }
    }
    else{
        for(int i=0;i<=last;i++){
            for(int j=0;j<=last-i;j++){
                if(data[j]<=data[j+1]){
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                }
            }
        }
    }
}
template<class T>
void SequenceList<T>::input(T& x){
    last++;
    data[last]=x;
}
template<class T>
void SequenceList<T>::output(){
    for(int i=0;i<=last;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}
template<class T>
bool SequenceList<T>::Insert(int i,T&x){
    i--;
    if(i<0||i>last+1)return false;
    if (IsFull())return false;
    for(int k=last;k>=i;--k)data[k+1]=data[k];
    data[i]=x;
    last++;
    return true;
}
template<class T>
bool SequenceList<T>::Remove(int i){
    i--;
    if(i<0||i>last+1)return false;
    if (IsEmpty())return false;
    for(int k=i;k<=last;k++)data[k]=data[k+1];
    last--;
    return true;
}
template<class T>
void SequenceList<T>::resize(int newSize){
    if(newSize<=0){
        cout<<"error"<<endl;
        exit(1);
    }
    if(newSize!=maxSize){
        maxSize=newSize;
        T* p=new T[maxSize];
        if(p==NULL){
            cout<<"error"<<endl;
            exit(1);
        }
        T* temp1=data;
        T* temp2=p;
        int index=last+1;
        while(index--)*temp2++=*temp1++;
        delete []data;
        data=temp2;
    }  
}

int main(){
    SequenceList<int> list1(10);
    int number=1;
    int number2=99;
    int temp;
    string empty,full;
    int a[10]={0};
    for(int i=0;i<10;i++){
        temp=rand()%100+1;
        list1.input(temp);
    }
    list1.output();
    cout<<"Size: "<<list1.Size()<<endl;
    cout<<"Length: "<<list1.Length()<<endl;
    cout<<"Search index for number "<<number<<": "<<list1.Search(number)<<endl;
    list1.getData(2,temp);
    cout<<"Get number for index 2: "<<temp<<endl;
    cout<<"Setting number "<<number2<<" to index 2."<<endl;
    list1.setData(2,number2);
    list1.output();
    list1.getData(2,temp);
    cout<<"Get number for index 2: "<<temp<<endl;
    number+=1;
    cout<<"Removing number at index 3."<<endl;
    list1.Remove(3);
    list1.output();
    cout<<"Inserting number "<<number<<" to index 5."<<endl;
    list1.Insert(5,number);
    list1.output();
    if(list1.IsEmpty())empty="True";
    else empty="False";
    full=list1.IsFull()?"True":"False";
    cout<<"List is empty: "<<empty<<endl;
    cout<<"List is full: "<<full<<endl;
    list1.Sort(false);
    cout<<"Sort Desc:";list1.output();
    return 0;
}