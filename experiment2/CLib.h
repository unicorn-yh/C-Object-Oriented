//完成实验二，画出程序流程图（可只画主函数），并将运行结果截图。
//CStash 定义了一个动态数组，其所需存储资源在运行时刻，根据具体需求动态分配。
//CLib.h
typedef struct CStashTag{
    int size;      //单个元素的空间大小
    int quantity;  //元素个数
    int next;      //末尾元素的下标
    unsigned char* storage;   //动态分配 byte 数组
}CStash;
void initialize(CStash*c,int size);
int add(CStash *c,const void* element);
void* fetch(CStash*c,int index);   //check index boundaries
int count(CStash* c);
void inflate(CStash*c,int increase);
void cleanup(CStash*c);
