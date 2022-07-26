#include<iostream>
class bantang{
           int army;
	public:

		bantang(){
			std::cout<<"bts is bestest kband group"<<std::endl;
		}

		bantang(int army){
			this->army=army;
	 std::cout<<this->army<<std::endl;

		}
		bantang(bantang &obj8){
			std::cout<<" they make me smile "<<std::endl;
        }
	void leader();
	void lachimolala();
};

void bantang ::leader(){

	std::cout<<"rm is leader"<<std::endl;
	bantang *obj2 = new bantang();
	obj2->lachimolala();
        

}
void bantang::lachimolala(){
	std::cout<<"jimin is cuteset"<<std::endl;

}
class army{
int cou;
std::string we;

 bantang band;
	public:
army(){
	std::cout<<"i purple uhh army"<<std::endl;
}
army(int cou,std::string we, bantang band1){
   this->cou=cou;
   this->we=we;
   this->band=band1;
}

void vkook(){
	std::cout<<cou<<std::endl;
	std::cout<<we<<std::endl;
	band.lachimolala();
	

}
void jhope(){
	std::cout<<"i am your hope u r my hope i am ur jhope"<<std::endl;
}
};


int main(){

bantang obj1;
obj1.leader();
bantang obj3(10);
bantang obj5(obj1);
army fan(200000,"love",obj1);
fan.vkook();
fan.jhope();
return 0;

}
