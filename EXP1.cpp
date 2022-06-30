// Swapping integers without using third variable by class
#include <iostream>
using namespace std;

class Swap{
	public:
	int a, b;

	void input(){
		cout << "Enter two numbers: ";
		cin >> a >> b;
	}
	void display(){
		cout << "Before swapping: " << a << " " << b << endl;
		a = a + b;
		b = a - b;
		a = a - b;
		cout<<"After swapping: "<<a<<" "<<b<<endl;
	}
};

int main(){
	Swap obj;
	obj.input();
	obj.display();
	return 0;
}