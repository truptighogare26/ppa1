#include<iostream>
class AddTwo{
    
int x=10;
int y=20;
public:
                   
 
friend int operator+(AddTwo& ref1,AddTwo& ref2);              //tyala ethe return type shi kahi problem nasto pn shakyato retuen type class
                                                             //dya karan normal madhe int aasel tar int return karto na.but if ethe int chya jagi class name ghetla
                                                              //tar khali  *int operator+(AddTwo& ref1, AddTwo& ref2){  
                                                             // return ref1.x + ref2.x; }erroe yete karan ethe return int kela aahe
                                                              

};

int operator+(AddTwo& ref1, AddTwo& ref2){  
            return  ref1.x + ref2.x;
}
int main(){
    AddTwo obj1;
    AddTwo obj2;
    int a=50;
    std::cout<<a;                                                  //he sudha  ostream operator overloading operator<<(ostream& cout,int a) ethe 
                                                                    // cout ha ostrem class cha obj aahe yacha return type ostream aahe 
   std::cout<<obj1+obj2<<std::endl;               //AddTwo operator+(obj1,obj2)   ethe retur value count print karto

    return 0;
}
