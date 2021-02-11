#include <iostream>

#include "Rectangle.cpp"

using namespace std;

int main()
{
    Rectangle Rect;

    int area;

    Rect.setWidth(5);
    Rect.setHeight(7);

    area = Rect.getArea();

    // Print the area of the object.
    cout << "Total area: " << Rect.getArea() << endl;

    // Print the total cost of painting
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;


    return 0;
}
