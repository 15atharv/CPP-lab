#include<iostream>
using namespace std;
class Vehicle{
    public:
    void vehicle(){
        cout<<"I am a vehicle"<<endl;
    }
};
class Fourwheeler : public Vehicle{
    public:
    void fourwheeler(){
        cout<<"I have a four wheels"<<endl;
    }
};
class Car : public Fourwheeler{
    public:
    void car(){
        cout<<"I am a car"<<endl;
    }
};
int main(){
    Car mycar;
    mycar.car();
    mycar.fourwheeler();
    mycar.vehicle();
    return 0;
}