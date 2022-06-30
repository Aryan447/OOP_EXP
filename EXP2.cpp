// A program in which member functions are defined outside a class
#include <iostream>
using namespace std;

class average{
    public:
        int a, b, c;
    void input();
    int average_calc(); 
};

void average::input(){
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
}
int average::average_calc(){
    return (a + b + c) / 3;
}

int main(){
    average obj;
    obj.input();
    cout << "Average: " << obj.average_calc() << endl;
    return 0;
}