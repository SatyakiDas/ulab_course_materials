#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
public:

    void setWidth(int w)
    {
        width = w;
    }

    void setHeight(int h)
    {
        height = h;
    }

protected:
    int width;
    int height;
};

#endif // SHAPE_H
