#include <iostream>
#include <cmath>

using namespace std;

class Point2d
{
private:
    double m_x;
    double m_y;

public:
    Point2d(double m_x=0.0, double m_y=0.0)
    {
        this->m_x = m_x;
        this->m_y = m_y;
    }

    void printPoint()
    {
        cout << "(" << m_x << "," << m_y << ")" << endl;
    }

    double distanceTo(const Point2d &other)
    {
        return sqrt((m_x - other.m_x)*(m_x - other.m_x) + (m_y - other.m_y)*(m_y - other.m_y));
    }

    friend class DistanceCalculator;
};

int main()
{
    Point2d first(3,4);
    Point2d second;

    first.printPoint();
    second.printPoint();

    DistanceCalculator dc;

    cout << "Distance between two points: " << dc.distanceFrom(first, second) << endl;

    return 0;
}
