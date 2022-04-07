#include <iostream>
using namespace std;

class base {
public:
    virtual void display() {
         cout<<"I'm from base class - display()"<<endl;
    }

     virtual void print() {
         cout<<"I'm from base class - print()"<<endl;
    }
};

class derrived: public base {
    public:
    void display() {
         cout<<"I'm from derrived class - display()"<<endl;
    }
    void print() {
         cout<<"I'm from derrived class - print()"<<endl;
    }
};


int main() {
    base* bptr;
    derrived d;
    bptr = &d;

    bptr->display();
    bptr->print();

    return 0;
}