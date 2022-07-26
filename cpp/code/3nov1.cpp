#include<iostream>
class army{
	int solider:
		std::string name;
        public:
	army(){
		std::cout<<"army force"<<std::endl;
	}
	army(int solider,std::string name){
		this->solider=solider;
		this->name=name;
	
	}
	
	void jung();
};
void army::jung(){
	std::cout<<solider<<std::endl;
	std::cout<<soname<<std::endl;
}
class airforce{
   int piolet;
   std::string pname;
   army Army;
	public:
   airforce(){
	   std::cout<<"air force"<<std::endl;
   }
   airforce(int piolet,std::string pname,airforce obj1){
	   this->piolet=piolet;
	   this->pname=pname;
	   this-> Army= obj1;
   }
   void yudh();
  

};
void airforce ::yudh(){
	Army.jung();
	std::cout<<piolet<<std::endl;
	std::cout<<pname<<std::endl;
}
int main(){
	army obj;
	army obj3(1000,"boss");
	airforce obj2( 200,"kernel",obj);
	obj2.yudh();
	return 0;
}

