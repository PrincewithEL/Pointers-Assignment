#include <iostream>
using namespace std;
//137187 - Asher Yisrael Kutswa

int main(){
	double number1;
	double number2;
	number1 = 7.3;
	double* ptr; 
	ptr=&number1;
	cout<<"The value of the object pointed to by ptr is : "<<number1<<endl;
	number2=*ptr;
	cout<<"The value of the variable number 2 is : "<<number2<<endl;
	cout<<"The address of the variable number 1 is : "<<&number1<<endl;
	cout<<"The address stored in ptr is : "<<ptr<<endl;
	return 0;
}
