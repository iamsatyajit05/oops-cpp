#include <iostream>
using namespace std;

class A {
    public:
    A(){
        cout<<"Contructer of A"<<endl;
    }
};

class B: public A {
    public:
    B() {
        cout<<"Contructer of B"<<endl;
    }    
};

class C: public B {
    public:
    C() {
        cout<<"Contructer of C"<<endl;
    }    
};

int main() {
    C obj;

    return 0;
}