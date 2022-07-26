#include<iostream>
class company{
int empid;
float sal;
	public:
company(int *empid,float *sal){
	this->empid=*empid;
	this->sal=*sal;
}
void info(){
	std::cout<<empid<<std::endl;
	std::cout<<sal<<std::endl;

}
};
int main(){
int x=25;
float salx=458.98;
company obj(&x,&salx);
obj.info();
	return 0;
	

}
