#include <iostream>
using namespace std;

class ABC {
    private:
        char ch = 'A';
        int num = 11;
    
    public:
        friend void display(ABC obj);
};

    void display(ABC obj){
        cout << obj.ch << endl;
        cout << obj.num << endl;
    }

int main() {
    ABC obj;
    display(obj);
    
    return 0;
}