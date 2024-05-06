#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
  string vehicleID;
  string brand;
  string model;
  int year;
  string color;

public:
	// Constructor
  Vehicle(string id, string brand, string model, int year, string color) {
    this->vehicleID = id;
    this->brand = brand;
    this->model = model;
    this->year = year;
    this->color = color;
  }

	// Getter
  string getVehicleID() const { 
	  return vehicleID; }
  string getBrand() const { 
	  return brand; }
  string getModel() const { 
	  return model; }
  int getYear() const { 
	  return year; }
  string getColor() const { 
	  return color; }

	// Setter
  void displayInfo() const {
    cout << "Vehicle ID: " << getVehicleID() << endl;
    cout << "Brand: " << getBrand() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Color: " << getColor() << endl;
  }

	// Kiem tra tuoi xe
  bool isVintage() const {
    return (2024 - year) >= 25; 
  }
};

int main() {
  // Tao doi tuong Mercedes-Benz
  Vehicle mercedes("GB9923", "Mercedes-Benz", "Double-Gentle-Class", 2023, "Light Silver");

  // In thông tin ve xe Mercedes-Benz
  mercedes.displayInfo();

  // Kiem tra xem co phai xe cu khong
  if (mercedes.isVintage()) {
    cout << mercedes.getBrand() << " " << mercedes.getVehicleID() << " la xe cu." << endl;
  } 
  	else {
    cout << mercedes.getBrand() << " " << mercedes.getVehicleID() << " khong la xe cu." << endl;
  }

  return 0;
}
