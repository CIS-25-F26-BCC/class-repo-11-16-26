#include "Animal.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"

#include "TwoDShape.h"
#include "Rectangle.h"
#include "Triangle.h"

#include <iostream>

using namespace std;

void makeTheAnimalMakeTheNoise(Animal * animal) {
    animal->makeNoise();
}

void printArea(TwoDShape * shape) {
    cout << "\nThe area of the shape is " << shape->getArea() << endl;
}

int main () {
    // Animal myAnimal;
    // Pig myPig;
    // Chicken myChicken;

    // TwoDShape myShape(5,10);

    Rectangle myRectangle(5,10);
    Triangle myTriangle(5,10);

    printArea(&myRectangle);
    printArea(&myTriangle);

    // makeTheAnimalMakeTheNoise(&myAnimal);
    // makeTheAnimalMakeTheNoise(&myPig);
    // makeTheAnimalMakeTheNoise(&myChicken);

    return 0;
}