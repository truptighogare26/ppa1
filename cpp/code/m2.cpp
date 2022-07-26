#include<iostream>
class company{
	public:
company(){
	std::cout<<"no para"<<std::endl;
}
company (company obj){
	std::cout<<"DYGASJDB1"<<std::endl;
}

};
int main(){
	company obj1;
	company obj4(obj1);
}
