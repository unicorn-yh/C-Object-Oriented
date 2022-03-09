//Make a Stash that holds doubles. Fill it with 25 double values, then print them out to the console. 
//（using Stash defined in C04:CppLib.h/CppLib.cpp)
//CLib3.h
class Stash{
    public:
        int size;
        int quantity;
        int next;
        unsigned char* storage;
        void initialize(int size);
        void cleanup();
        void* fetch(int index);
        int count();
        int add(const void* element);
        void inflate(int increase);
};

// OR 

//Clib3.h
/*struct Stash{
    int size;      
    int quantity;  
    int next;      
    unsigned char* storage;  
    void initialize(int size);
    void cleanup();
    void* fetch(int index);
    int count();
    int add(const void* element);
    void inflate(int increase); 
};*/


