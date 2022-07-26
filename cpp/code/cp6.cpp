#include<iostream>
int main(){
	extern int  a;
	 int b=20;
	std::cout<< b <<std::endl;
	const int c=30;
	std::cout<< c<<std::endl;
	//c=40;
	int x=50;
	int &y=x;
	std::cout<<x<<y<<std::endl;
	std::cout<<&x<<" "<<&y<<std::endl;
	x=80;
	std::cout<<&x<<" "<<&y<<std::endl;
	return 0;
}
