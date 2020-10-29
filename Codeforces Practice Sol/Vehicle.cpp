#include <iostream>
using namespace std;
class Vehicle
{
    public:
    void display()
    {
        cout<<"This is a vehicle with 4 wheels"<<endl;
    }
};
class Car: public Vehicle
{
    public:
    void display()
    {
        Vehicle::display();
        cout<<"This is a 2-seater car"<<endl;
        cout<<"This is an AC Car"<<endl;
        cout<<"It can switch between automatic and manual modes with 6 gears"<<endl;
    }
};
class SuperCar: public Car   
{
    public:
    void display()
    {
        Car::display();
        cout<<"This belongs to the SuperCar class"<<endl;
        cout<<"The price of the SuperCar is $50,000"<<endl;
        cout<<"Top speed=300km/hr with 0 to 100 in 3.6 seconds"<<endl;
    }
};
int main ()
{
    SuperCar ob;  
    ob.display();
    return 0;
}
