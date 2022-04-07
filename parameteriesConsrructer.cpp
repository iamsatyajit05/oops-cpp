#include <iostream>
using namespace std;

class add
{
private:
    /* data */
public:
    add(int a, int b) {
        cout<<"Sum of two number is "<< a+b <<endl;
    }
};

int main() {
    add num(5, 6);
    return 0;
}