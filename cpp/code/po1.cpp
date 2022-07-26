#include<iostream>
class bmw{
	int num ;
	public:
	bmw(){
		std::cout<<"shreer driving pleasure"<<std::endl;
	}
	bmw(int numscale){
		num=numscale;
	}
	void display(){
		std::cout<<num;
		std::cout<<num;
	}
};
int main(){
	bmw obj1;
	bmw *obj2=new bmw(75);
	obj1.display();
	obj2->display();
	return 0;
}
