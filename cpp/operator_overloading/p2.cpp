#include<iostream>
class AddTwo{

int x=10;
int y=20;
public:
void disp(){
    std::cout<<x+y<<std::endl;                  //int operator+(int,int) function la call jato
}


};
int main(){
    AddTwo obj;
   obj.disp();

    return 0;
}


