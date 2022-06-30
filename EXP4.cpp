// Create an abstract class Shape which has a field PI=3.14 as final and it has an abstract method Volume. Make two subclasses Cone and Sphere from this class and they print their volume
#include <iostream>
#include <cmath>
using namespace std;
float PI = 3.14f;

class Shape{
public:
    virtual float volume() = 0;
};

class Cone : public Shape{
    float radii, height;
    public:
    Cone(float r = 0, float h = 0) : radii(r), height(h) {}
    float volume(){
        return (PI * pow(radii, 2) * height) / 3;
    }
};
class Sphere : public Shape{
    float radii;
    public:
    Sphere(float r = 0) : radii(r) {}
    float volume(){
        return (4 * PI * pow(radii, 3)) / 3;
    }
};

int main(){
    Cone c(2, 3);
    Sphere s(3);
    cout << "Cone Volume: " << c.volume() << endl;
    cout << "Sphere Volume: " << s.volume() << endl;
    return 0;
}