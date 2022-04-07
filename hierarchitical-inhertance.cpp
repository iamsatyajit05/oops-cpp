#include <iostream>
using namespace std;

class A {
    public:
    A() {
        cout<<"Contructer of A"<<endl;
    }
};

class B: public A {
    public:
    B(){
        cout<<"Contructer of B"<<endl<<endl;
    }    
};

class C: public A {
    public:
    C(){
        cout<<"Contructer of C"<<endl<<endl;
    }    
};

int main() {
    B obj1;
    C obj2;

    return 0;
}