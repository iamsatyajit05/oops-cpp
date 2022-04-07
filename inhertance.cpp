#include <iostream>
using namespace std;

class A {
    public:
    A(){
        cout<<"I'm A"<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"I'm B"<<endl;
    }    
};

int main() {
    B obj;

    return 0;
}