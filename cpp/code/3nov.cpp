#include<iostream>
class employee{
	int empi;
		std:: string empname;
	public:
		employee(){
			std::cout<<"constructor of employye"<<std::endl;
		}
		employee(int empi,std::string empname){
			this->empi=empi;
			this-> empname=empname;
		}
		void empinfo(){
			std::cout<<empi<<std::endl;
			std::cout<<empname<<std::endl;

		}
};
class company{
	std::string compname;
	
	employee emp;
          public:
     	company(std::string compname,employee obj){
	    this ->compname=compname;
	    this->emp=obj;
    }
    void disp(){
	    emp.empinfo();
	   }

};
int main(){
	employee obj1(215,"rahul");
	company obj2("bmc ",obj1);
	obj2.disp();
	return 0;
}
