#include <iostream>
using namespace std;

class A {
    public:
    A() {
        cout<<"Contructer of A"<<endl;
    }
};

class B {
    public:
    B() {
        cout<<"Contructer of B"<<endl;
    }    
};

class C: public A, public B{
    public:
    C() {
        cout<<"Contructer of C"<<endl;
    }    
};

int main() {
    C obj;

    return 0;
}