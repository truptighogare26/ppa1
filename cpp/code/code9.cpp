#include<iostream>
class company{
	int emp =20;
	public:
	company(){
		std::cout<<"in no para con"<<std::endl;
		emp++;
		std::cout<<emp<<std::endl;
	}
	company(int x){
		std::cout<<"in para"<<std::endl;
		std::cout<<emp<<std::endl;
	}
};
int main(){
	company *obj1 = new company();
	company *obj2 =new company(10);
 return 0;
}
