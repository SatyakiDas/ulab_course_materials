#include <iostream>

using namespace std;

class Car
{
    public:
        string color;
        string manufacturer;
        string model;

        void setData(string color, string manufacturer, string model)
        {
            this->color = color;
            this->manufacturer = manufacturer;
            this->model = model;
            setPrivateData();
        }

        void showData()
        {
            cout << color << endl;
            cout << manufacturer << endl;
            cout << model << endl;
            showPrivateData();
        }

    private:
        string wheels[4];
        int price;
        float fuelConsumption;

        void setPrivateData()
        {
            wheels[0] = "Goodyear";
            wheels[1] = "Apollo Tyres";
            wheels[2] = "Bridgestone";
            wheels[3] = "Yokohama";
            price = 1000000;
            fuelConsumption = 20;
        }

        void showPrivateData()
        {
            cout << wheels[0] << " " << wheels[1] << " " << wheels[2] << " " << wheels[3] << endl;
            cout << price << " BDT" << endl;
            cout << fuelConsumption << " mpL" << endl;
        }
};

int main()
{
    Car myCar1;
    myCar1.setData("Orange", "Mitsubishi", "Lancer");
    myCar1.showData();

//    myCar1.color = "Blue";
//    myCar1.manufacturer = "Honda";
//    myCar1.model = "Accord";

    cout << endl << endl;

    Car myCar2;

    myCar2.setData("Black", "Nissan", "Bluebird");
    myCar2.showData();


    return 0;
}
