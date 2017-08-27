#include <iostream>
using namespace std;
class student{
	int number, age;
public:
	void get(){
		cin>>number;
		cin>>age;
	}
	void display(){
		cout<<number<<endl;
		cout<<age;
	}

};