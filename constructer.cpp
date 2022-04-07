#include <iostream>
using namespace std;

class constructerDemo {
private:
    /* data */
public:
    constructerDemo() {
        cout<<"This is from constructer"<<endl;
    }
};

int main() {
    constructerDemo obj;

    return 0;
}