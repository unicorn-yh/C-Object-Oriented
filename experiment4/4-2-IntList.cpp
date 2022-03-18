//请给出该类所有成员的类外定义，并写一个main()来测试所有的借口
//4-2-IntList.cpp
#include <bits/stdc++.h>
using namespace std;
class IntList{ //整形链表
    protected:
        struct Node{
            Node* next;
            int data;
        };
        Node* pFirst;
    public:
        IntList();
        ~IntList();
        bool insert(int i,int elem);
        bool remove(int i);
        int* find(int elem)const;
        int length()const;
        void printList();   
};
IntList::IntList(){
    cout<<"Integer List is created."<<endl;
    pFirst=NULL;
}
IntList::~IntList(){
    cout<<"Integer List is destroyed."<<endl;
    delete pFirst;
}
bool IntList::insert(int i,int elem){
    int k=1;
    Node* ptr;
    //Node* ptr2;
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=elem;
    temp->next=NULL;
    if(pFirst==NULL){
        pFirst=temp;
    }
    else if(i==0){  //insert at the end of the list
        ptr=pFirst;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
    else if(i==1){
        cout<<"Inserting number "<<elem<<" into position "<<i<<".";
        temp->next=pFirst;
        pFirst=temp;
    }
    else{
        cout<<"Inserting number "<<elem<<" into position "<<i<<".";
        ptr=pFirst;
        while(ptr->next!=NULL && k<i-1){
            ptr=ptr->next;
            ++k;
            if(ptr->next==NULL){
                cout<<" Position not found."<<endl;
                return false;
            }
        }
        cout<<endl;
        temp->next=ptr->next;
        ptr->next=temp;       
    }
    return true;
}
bool IntList::remove(int i){
    int k=1;
    Node *ptr,*temp;
    if(pFirst==NULL){
        cout<<"List empty."<<endl;
        return true;
    }
    else if(i==1){
        cout<<"Deleting number at position "<<i<<". ";
        ptr=pFirst;
        pFirst=pFirst->next;
        cout<<"Number deleted:"<<ptr->data<<"."<<endl;
        free(ptr);
        return true;
    }
    else{
        cout<<"Deleting number at position "<<i<<". ";
        ptr=pFirst;
        while(pFirst->next!=NULL && k<i){
            temp=ptr;
            ptr=ptr->next;
            ++k;
            if(ptr==NULL){
                cout<<"Position not found."<<endl;
                return false;
            }
        }
        temp->next=ptr->next;
        cout<<"Number deleted:"<<ptr->data<<"."<<endl;
        free(ptr);
    }
    return true;
   
}
int* IntList::find(int elem)const{
    Node* temp=pFirst;
    while(temp){
        temp=temp->next;
        if(temp->data==elem)break;
    }
    if(!temp)return 0;
    return &(temp->data);
}
int IntList::length()const{
    int k=0;
    Node* temp=pFirst;
    while(temp!=NULL){
        ++k;
        temp=temp->next;
    }
    return k;
}
void IntList::printList(){
   Node* temp=pFirst;
    if(temp==NULL)return;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
void printLength(int length){
    cout<<"List length: "<<length<<".\n\n";
}
int main(){
    IntList in; 
    int ListSize=10;
    int a=rand()%ListSize+1;
    int b=rand()%100+1;
    for(int i=1;i<=ListSize;i++) in.insert(0,i);
    in.printList(); printLength(in.length());
    in.insert(a+3,b);
    in.printList(); printLength(in.length());
    in.remove(a+4);
    in.printList(); printLength(in.length());
    cout<<"Finding number "<<a<<".\n";
    cout<<"Address:"<<in.find(a)<<". Value:"<<*in.find(a)<<"\n\n";
    cout<<"Removing the whole List.\n";
    for(int i=1;i<=ListSize;i++) in.remove(1);
    in.printList();
    return 0;
}