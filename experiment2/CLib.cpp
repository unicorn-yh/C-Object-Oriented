//完成实验二，画出程序流程图（可只画主函数），并将运行结果截图。
//CStash 定义了一个动态数组，其所需存储资源在运行时刻，根据具体需求动态分配。
//CLib.cpp
#include "CLib.h"
#include <bits/stdc++.h>
using namespace std;
const int increment=100;
void initialize(CStash* s,int size){
    s->size = size;
    s->next = 0;
    s->quantity = 0;
    s->storage = 0;
}
int add(CStash* s,const void* element){   //增加一个元素 element 
    if(s->next >= s->quantity) inflate(s,increment);  //not enough space
    int startByte = s->next*s->size;
    unsigned char* e = (unsigned char*)element;
    for(int i=0;i<s->size;i++) 
        s->storage[startByte+i] = e[i];  //copy element into storage
    s->next++;            //末尾下标加一
    return (s->next-1);   //return last index number 返回末尾下标
}
void* fetch(CStash* s,int index){   //返回该元素的存储首地址
    assert(index>=0);
    if(index>=s->next) return 0;
    return &(s->storage[index*s->size]);
}
int count(CStash* s){  //元素个数
    return s->next;    //返回末尾下标
}
void inflate(CStash* s,int increase){   //增加空间位子 重新定义storage
    assert(increase>0);
    int newQuantity = s->quantity+increase;
    int newByte = newQuantity*s->size;
    int oldByte = s->quantity*s->size;
    unsigned char* temp = new unsigned char[newByte];
    for(int i=0;i<oldByte;i++) temp[i]=s->storage[i];  //copy old to new, old后面是空的，等待被赋值
    delete[] s->storage;
    s->storage = temp;
    s->quantity = newQuantity;
}
void cleanup(CStash* s){   //free storage
    if(s->storage!=0) delete[] s->storage;
}





