#include<iostream>
class Core2web{
  int mychair=200;

  void lang();
	public :
  void admission();
};
void Core2web :: lang(){
	std::cout<<"ppa,java,python,os"<<std::endl;
}
void Core2web :: admission(){
	std::cout<<"take admission"<<std::endl;
	std::cout<<mychair<<std::endl;
	lang();
}
int main(){
	Core2web obj;
	obj.admission();
	return 0;
}

