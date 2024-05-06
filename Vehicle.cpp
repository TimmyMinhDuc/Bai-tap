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

  // Getter methods
  string getVehicleID() const { return vehicleID; }
  string getBrand() const { return brand; }
  string getModel() const { return model; }
  int getYear() const { return year; }
  string getColor() const { return color; }

  // Setter methods (optional)
  void setVehicleID(string id) { vehicleID = id; }
  void setBrand(string brand) { this->brand = brand; }
  void setModel(string model) { this->model = model; }
  void setYear(int year) { this->year = year; }
  void setColor(string color) { this->color = color; }

  // New methods:
  void displayInfo() const {
    cout << "Vehicle ID: " << getVehicleID() << endl;
    cout << "Brand: " << getBrand() << endl;
    cout << "Model: " << getModel() << endl;
    cout << "Year: " << getYear() << endl;
    cout << "Color: " << getColor() << endl;
  }

  bool isVintage() const {
    return (2024 - year) >= 25; // Check for vintage based on current year
  }
};

int main() {
  // Create a Mercedes-Benz object
  Vehicle mercedes("MB123", "Mercedes-Benz", "S-Class", 2023, "Silver");

  // Display information using the new method
  mercedes.displayInfo();

  // Check if the Mercedes is vintage
  if (mercedes.isVintage()) {
    cout << mercedes.getBrand() << " " << mercedes.getModel() << " is a vintage car." << endl;
  } else {
    cout << mercedes.getBrand() << " " << mercedes.getModel() << " is not a vintage car." << endl;
  }

  return 0;
}
