// create a class called LIST with two pure virtual function store() and retrieve().To store a value call store and to retrieve call retrieve function. Derive two classes stack and queue from it and override store and retrieve
#include <iostream>
using namespace std;

class LIST{
    public:
    virtual void store(int) = 0;
    virtual int retrieve() = 0;
};

class stack : public LIST{
    public:
    void store(int x){
        top++;
        arr[top] = x;
    }
    int retrieve(){
        return arr[top--];
    }
    int arr[100];
    int top = -1;
};

class queue : public LIST{
    public:
    void store(int x){
        rear++;
        arr[rear] = x;
    }
    int retrieve(){
        return arr[front++];
    }
    int arr[100];
    int front = 0;
    int rear = -1;
};

int main(){
    stack s;
    s.store(1);
    s.store(2);
    s.store(3);
    cout << s.retrieve() << " ";
    cout << s.retrieve() << " ";
    cout << s.retrieve() << " ";
    queue q;
    q.store(1);
    q.store(2);
    q.store(3);
    cout << q.retrieve() << " ";
    cout << q.retrieve() << " ";
    cout << q.retrieve() << " ";
    return 0;
}