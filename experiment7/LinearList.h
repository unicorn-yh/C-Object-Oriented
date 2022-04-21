/*线性表抽象数据类型，编写模板的派生类：顺序表类，并在main()中使用该模板进行测试*/
//LinearList.h
#ifndef LinearList_h
#define LinearList_h
template <typename T>
class LinearList{
    public:
        LinearList(){}
        virtual ~LinearList(){}
        virtual int Size() const=0;    //表容量
        virtual int Length() const=0;  //表长
        virtual int Search(T& x) const=0;  //搜索x值
        virtual int Locate(T& i) const=0;  //定位第i项
        virtual bool getData(int i,T& x) const=0; //获取第i项
        virtual void setData(int i,T& x) =0; //修改第i项
        virtual bool Insert(int i,T& x) =0; //第i项后插入x
        virtual bool Remove(int i,T& x) =0; //删除第i项
        virtual bool IsEmpty() const=0; //判表空
        virtual bool IsFull() const=0;  //判表满
        virtual void Sort() =0;   //排序
        virtual void input() =0;  //输入
        virtual void output() =0;  //输出
};
#endif