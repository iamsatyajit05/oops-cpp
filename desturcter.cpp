#include <iostream>
using namespace std;

class helloWorld {
private:
    /* data */
public:
    helloWorld() {
        cout<<"This is constructer"<<endl;
    }

    ~helloWorld() {
        cout<<"This is destructer"<<endl;
    }

    void display() {
        cout<<"This is memebr funcation"<<endl;
    }
};



int main() {
    helloWorld obj;
    obj.display();

    return 0;
}