#include <iostream>
using namespace std;
class Rectangle {
private:
	double width;
	double height;

public:
	Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	double getPerimeter() const {
		return 2 * (width + height);
	}
	double getArea() const {
        return width * height;
    }
} ;

int main() {
	Rectangle myRectangle(5, 10);
	cout << "Perimeter: " << myRectangle.getPerimeter() << endl;
	cout << "Area: " << myRectangle.getArea() << endl;
	Rectangle hinhcn2(3, 4);
	cout << "Chu VI: " << hinhcn2.getPerimeter() << endl;
	cout << "DIEN TICH: " << hinhcn2.getArea() << endl;
	
	return 0;
}

