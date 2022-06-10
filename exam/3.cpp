#include <iostream>   
#include <string>
using namespace std;  
// Your definition of MArray:
template<class T>
class MArray{        
    public:
        int array_size;
        T *elem;              //array
        MArray(int n){
            array_size=n;
            elem=new T[array_size];  //initialize array
        }
        void getElem(){    //display elements
            for(int i=0;i<array_size;i++){
                cout<<elem[i]<<", ";
            }
            cout<<endl;
        }    
};
int main(){
	MArray<int> intArray(5);	 // 5 is the number of elements
	for (int i = 0; i<5; i++)
		intArray.elem[i] = i*i;
	MArray<string> stringArray(2);	
	stringArray.elem [0] =  "string0";
    stringArray.elem [1] =  "string1";
	MArray<string>  stringArray1 = stringArray;
    intArray.getElem();       // display: 0, 1, 4, 9, 16,
    stringArray1.getElem();   // display: string0, string1,
	return 0;
}