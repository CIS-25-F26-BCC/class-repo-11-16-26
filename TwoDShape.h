#ifndef TwoDShape_H
#define TwoDShape_H

// because this class has a pure virtual function, it's an abstract base class (ABC)
class TwoDShape {

    private:
        // some memory in RAM
    protected:
        double width;
        double height;

    public:
        TwoDShape(double width, double height);
        ~TwoDSShape();
        double getWidth();
        double getHeight();
        virtual double getArea() = 0; // pure virtual function
};

#endif