#include <iostream>
#include <memory>
using namespace std;
class Woman;
class Man{ 
    public:
        /*void setWife(std::share_ptr<Woman>woman){
            wife=woman; 
        }*/
        ~Man(){std::cout<<"man dead\n";} //destructor
    private:
        std::shared_ptr<Woman>wife; 
};
class Woman{
    public:
        void setHusband(std::shared_ptr<Man>man){
            husband=man;
        }
        ~Woman(){std::cout<<"woman dead\n";} 
    private:
        std::shared_ptr<Man>husband; 
};
int main(){
    shared_ptr<Man> pman(new Man()); 
    shared_ptr<Woman> pwoman(new Woman());
    cout<<"man的引用计数为: "<<pman.use_count()<<endl;
    cout<<"woman的引用计数为: "<<pwoman.use_count()<<endl;
    if(pman&&pwoman){
        //pman->setWife(pwoman);
        pwoman->setHusband(pman);
    }
    cout<<"man的引用计数为: "<<pman.use_count()<<endl;
    cout<<"woman的引用计数为: "<<pwoman.use_count()<<endl;
    return 0;
}