#include<iostream>
class Core2web
{
	int MyChair = 200;

	void lang(){
		std::cout<<"java,ppa,python,os"<<std::endl;
	}
	public :
	void admission(){
		std::cout<<"take admission"<<std::endl;
		std::cout<<MyChair<<std::endl;
		lang();
	}
};
int main(){
	Core2web obj;
	//std::cout<<obj.MyChair<<std::endl;
	//std::cout<<obj,lang()<<std::endl;
	obj.admission();
	return 0;
}
