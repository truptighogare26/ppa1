#include<iostream>
class Bigbazar{
	int newprod=4000;
     public :

	Bigbazar(){
		std::cout<<"in non para constructor"<<std::endl;
	}
	Bigbazar(int list){
		std::cout<<"in para constructor"<<std::endl;
	}
	void bill(){
		std::cout<<"please pay bill"<<std::endl;
	}
};
int main(){
	
	Bigbazar obj1();
	Bigbazar obj2(10);
	obj1.bill();
	obj2.bill();
	return 0;
}



// output :
//          in non para contructor
//          in para constructor
//          plz pay bill
//          plz pay bill
