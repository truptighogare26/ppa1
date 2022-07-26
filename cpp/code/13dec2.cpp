#include<iostream>

class Core2web{

 int a=100;
  public:
     int x=10;
     Core2web(){
	     std::cout<<"constructor"<<std::endl;
     }
     ~Core2web(){
	     std::cout<<"destructor"<<std::endl;
     }
     void display(){
     std::cout<<x<<a<<std::endl;
     }
};
 class Incubator:public Core2web{
 public:
	 int y=20;

         Incubator(){
		 std::cout<<"child constructor"<<std::endl;
	 }
	 ~Incubator(){
		 std::cout<<"child destructor"<<std::endl;
	 }
	 void displaychild(){
		 std::cout<<x<<y<<std::endl;
	 }

 };
int main(){
	Incubator obj;
	Core2web obj2;
	std::cout<<obj2.x<<std::endl;
	obj.display();
	obj.displaychild();
	return 0;
}
