#include<iostream>
class company{
	public :
	company(){
		std::cout<<"in no para cons"<<std::endl;
		company(20);
	}
	company(int x){
		std::cout<<"in para cons"<<std::endl;
	}
           void emp(){
		   std::cout<<"emp"<<std::endl;
	   }
};
int main(){
	company obj1;
	company *obj2 = new company(10);
            obj1.emp();
	    obj2 -> emp();
	    return 0;

}
