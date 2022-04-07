#include <iostream>
using namespace std;

class Add {
    public:
    int sum(int a, int b) {
        return a+b;
    }

    int sum(int a, int b, int c) {
        return a+b+c;
    }
};


int main() {
    Add obj;

    cout<<"Output: "<<obj.sum(10, 20)<<endl;
    cout<<"Output: "<<obj.sum(10, 20, 30)<<endl;

    return 0;
}