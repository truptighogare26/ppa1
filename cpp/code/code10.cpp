#include<iostream>
class park{
    int x=10;

	public :
         park(){
		 std::cout<<"in no arg"<<std::endl;
	 }
	 park(int x){
		 std::cout<<"in arg"<<std::endl;
	 }
	 void fun(){
		 std::cout<<"in fun"<<std::endl;
		 park obj3;
		 park *obj4=new park(10);
		 gun();
		 delete(obj4);
	 }
	 void gun(){
		 std::cout<<"in gun"<<std::endl;
		 park obj5;
		 park *obj6=new park(20);
		 run();
		 delete(obj6);
	 }
	 void run(){
		 std::cout<<"in run"<<std::endl;
       park obj7;
       park *obj8=new park(30);
       delete(obj8);
          }
};
int main(){
	park obj1;
	park *obj2 =new park(40);
	obj1.fun();
	obj2 ->fun();
      delete(obj2);
	return 0;

}
// in nom arg
// in arg
//in fun
//in no para
//in para
//in gun
//in no para
//in para
//in run
//no para
//in para


