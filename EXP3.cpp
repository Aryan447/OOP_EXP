// C++ to find the greater of B given numbers in two different classes using friend function
#include <iostream>
using namespace std;

class A;
class B;

class A{
    int num1 = 68;
    public:
    A(){
        cout << "First number is: "<<num1<< endl;
    }
    friend int calculate(A num1, B num2);
};
class B{
    int num2 = 34;
    public:
    B(){
        cout << "Second number is: "<<num2<< endl;
    }
    friend int calculate(A num1, B num2);
};

int calculate(A x, B y){
    return (x.num1 > y.num2) ? x.num1 : y.num2;
}

int main(){
    A x;
    B y;
    cout << "Biggest number between B is " << calculate(x, y) << endl;
}

