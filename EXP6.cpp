// c++ program to define the function template for calculating the square of given numbers with different data types
#include<iostream>
using namespace std;

template <class T>
inline T square(T x){
    return x*x;
}

int main(){
    int i = 5;
    float f = 5.5;
    double d = 5.55;
    cout<<"Square of integer: "<<square(i)<<endl;
    cout<<"Square of float: "<<square(f)<<endl;
    cout<<"Square of double: "<<square(d)<<endl;
    return 0;
}