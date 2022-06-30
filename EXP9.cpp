// C++ program Containing a Possible Exception. Use a Try Block to Throw it and a Catch Block to Handle it Properly
#include<iostream>
using namespace std;

class Exception{
    public:
        void print_message(){
            cout<<"Exception Occured"<<endl;
        }
};

void func(){
    Exception e;
    e.print_message();
}

int main(){
    try{
        func();
    }
    catch(Exception e){
        e.print_message();
    }
    return 0;
}