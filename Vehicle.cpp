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
		Vehicle(string id, string brand, string model, int year, string color) {
			this->vehicleID = id;
    		this->brand = brand;
    		this->model = model;
    		this->year = year;
   			this->color = color;
		}
		
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
		
		
	void displayInfo() const {
		
	cout << "ID Xe: " << getVehicleID() << endl; 
	
	cout << "Hang xe: " << getBrand() << endl;
	
	cout << "Doi xe: " << getModel() << endl;
	
	cout << "Nam san xuat: " << getYear() << endl;
	
	cout << "Mau xe: " << getColor() << endl;
	
	}
	
	bool isVintage() const {
		return (2024 - year) >= 25; }
};

int main() {
	Vehicle mercedes("MD69", "Mercedes-Benz", "SSS-Vip", 2023, "Bac Soi Trang");
	
	mercedes.displayInfo();
	
	if (mercedes.isVintage()) {
		
    cout << mercedes.getBrand() << " " << mercedes.getVehicleID() << " la xe cu" << endl;
  	} 
  	
  	else {
  		
    cout << mercedes.getBrand() << " " << mercedes.getVehicleID() << " khong la xe cu" << endl;
  	}

return 0;

}
