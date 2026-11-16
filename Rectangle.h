#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "TwoDShape.h"

class Rectangle : public TwoDShape {
    private:
    public:
        Rectangle(double width, double height);
        double getArea() override;
};

#endif