// Create an inheritance hierarchy of rodent, Mouse, Gerbil, Hamster etc. In the base class provide methods that are common to all Rodents and override these in the derived classes to perform different behaviors, depending on the specific type of rodent. Create an array of rodent, fill it with different specific types of Rodents and call your base class methods
#include <iostream>
using namespace std;

class rodent{
    public:
    virtual void eat(){
        cout<<"rodent eats"<<endl;
    }
    virtual void sleep(){
        cout<<"rodent sleeps"<<endl;
    }
};
class mouse:public rodent{
    public:
    void eat(){
        cout<<"Mouse eats"<<endl;
    }
    void sleep(){
        cout<<"Mouse sleeps"<<endl;
    }
};
class gerbil:public rodent{
    public:
    void eat(){
        cout<<"Gerbil eats"<<endl;
    }
    void sleep(){
        cout<<"Gerbil sleeps"<<endl;
    }
};
class hamster:public rodent{
    public:
    void eat(){
        cout<<"Hamster eats"<<endl;
    }
    void sleep(){
        cout<<"Hamster sleeps"<<endl;
    }
};

int main(){
    rodent *r[4];
    r[0]=new mouse;
    r[1]=new gerbil;
    r[2]=new hamster;
    r[3]=new mouse;
    for(int i=0;i<4;i++){
        r[i]->eat();
        r[i]->sleep();
    }
    return 0;
}