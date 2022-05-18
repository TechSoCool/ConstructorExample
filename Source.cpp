#include<iostream>
using namespace std;

class Wall {
	private:
	double length;
	double height;

	public: // function to initalize private variables
	Wall(double len, double hgt) // define constructor
	{
		length = len;
		height = hgt;
	}

	double calculateArea() {
		return length * height;

	}

};

int main() {
	//create object of roomclass
	Wall wall1(10.5, 8.6);
	Wall wall2(8.5, 6.3); 
	// assign values

	// calculate
	cout << "Area of Wall: " << wall1.calculateArea() << endl;
	cout << "Area of Rooom: " << wall2.calculateArea() << endl;

	return 0;
}