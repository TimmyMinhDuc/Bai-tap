#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getPerimeter() const {
        return 2 * 3.14 * radius;
    }
    double getArea() const {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle myCircle(5);
    cout << "Perimeter: " << myCircle.getPerimeter() << endl;
    cout << "Area: " << myCircle.getArea() << endl;

    Circle hinhtron2(3);
    cout << "Chi Vi: " << hinhtron2.getPerimeter() << endl;
    cout << "Dien Tich: " << hinhtron2.getArea() << endl;

    return 0;
}

