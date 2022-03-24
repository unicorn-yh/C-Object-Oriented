/*1. Sort integer num array[10]*/
//5-1.cpp
#include <iostream>
using namespace std;
void Swap(int *a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void Sort(int a[],int size,bool asc){
    if(asc){
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(a[j]>a[j+1]){
                   Swap(&(a[j]),&(a[j+1]));
                }
            }
        }
    }
    else{
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-i-1;j++){
                if(a[j]<a[j+1]){
                    Swap(&(a[j]),&(a[j+1]));
                }
            }
        }
    } 
}
void Show(int a[],int size){
    cout<<"[";
    for(int i=0;i<size;i++){
        cout<<a[i];
        if(i!=size-1)cout<<",";
    }
    cout<<"]"<<endl;
}
int main(){
    int a[10],b;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++){
        b=rand()%100+1;
        a[i]=b;
    }
    cout<<"Original list."<<endl;
    Show(a,size);
    cout<<"List after ascending order."<<endl;
    Sort(a,size,true);
    Show(a,size);
    cout<<"List after descending order."<<endl;
    Sort(a,size,false);
    Show(a,size);
    return 0;
}