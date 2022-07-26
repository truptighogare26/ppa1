#include<iostream>
class company{
	public:
company(){
	std::cout<<"no para"<<std::endl;
}
company(int x){
	std::cout<<"para constructor"<<std::endl;
}
company(company &obj){
	std::cout<<"copy constructor"<<std::endl;
}


};
int main(){
  company obj1;
  company obj2(10);
  company obj3=obj2;
  company obj4(obj2);

	return 0;

}
