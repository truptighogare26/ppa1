#include<iostream>
class core2web{
int x=10;
	public :
   int y=20;
core2web(){
	std::cout<<"in constructor"<<std::endl;
}
void fun(){
	std::cout<<x<<y<<std::endl;
}

};
 class Incubator : public Core2web{
  int a=10;
   public :
     int b=20;
     Incubator(){
              std::cout<<a<<b<<std::endl;
     }


 };
int main(){
 Incubator obj;
 obj.fun();

return 0;
}
