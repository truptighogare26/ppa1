#include<iostream>
using namespace std;

int main() {
            int flag=0;
 	int num;
	cin >> num;

	for(int i = 2; i <= num / 2; i++ ){
	
		if(num % i == 0)
		flag =1;
	}

	if(flag==1)
		cout<<"not prime"<<endl;
	else
		cout<<"prime"<<endl;
	cout << endl;
	return 0;
}
