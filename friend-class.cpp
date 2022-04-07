#include <iostream>
using namespace std;

class ABC {
    private:
        char ch = 'A';
        int num = 11;
    
    public:
        friend class XYZ;
};

class XYZ {
    public:
    void display(ABC obj1){
        cout << obj1.ch << endl;
        cout << obj1.num << endl;
    }    
};

int main() {
    XYZ obj1;
    ABC obj2;

    obj1.display(obj2);
    
    return 0;
}