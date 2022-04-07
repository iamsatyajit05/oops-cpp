#include <iostream>
using namespace std;

class A {
    public:
    void display() {
         cout<<"I'm A"<<endl;;
    }
};

class B {
    public:
    void display() {
         cout<<"I'm B"<<endl;;
    }
};


int main() {
    A obj1;
    obj1.display();

    B obj2;
    obj2.display();

    return 0;
}