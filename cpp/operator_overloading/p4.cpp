#include<iostream>
class AddTwo{
    
int x=10;
int y=20;
public:

                   
friend AddTwo operator+(AddTwo& ref1,AddTwo& ref2);
                                                              

};
AddTwo operator+(AddTwo& ref1, AddTwo& ref2){  
            return AddTwo( ref1.x + ref2.x);      // this will solve in code 5
}

int main(){
    AddTwo obj1;
    AddTwo obj2;
   AddTwo obj3 =obj1+obj2;
    return 0;
}