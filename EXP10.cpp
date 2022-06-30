// c++ program to raise an exception if any attempt is made to refer to an element whose index is beyond the array size
#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    try{
        int x = 0;
        while(1){
            cout << arr[x] << endl;
            x++;
            if (x == 5)
            throw x;
        }
    }
    catch (int y){
        cout<<"array index out of bound"<<endl;
    }
    return 0;
}