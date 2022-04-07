#include <iostream>
using namespace std;

class car
{
private:
    char color[10];
    
public:
int speed;

    void getData(int distance, int fuel){
        cout<<"Car has coverd "<<distance<<" Km and consumed "<<fuel<<" L Fuel."<<endl;
    }

    void milage(float distance, float fuel);

    void carspeed(){
        cout<<"Car speed is "<<speed<<endl;
    }
} maruti;

void car::milage(float d, float f){
    cout<<"Milage of this car is "<<d/f<<endl;
}

int main() {
    car swift;

    swift.getData(5036, 500);
    maruti.getData(15635, 1530);
    swift.milage(1020, 86);

    swift.speed=85;
    swift.carspeed();
    return 0;
}