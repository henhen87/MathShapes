// MathShapes.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;



int main()
{
	double radius, area;

	cout << "This program will calculate the area of a circle, but will later calculate areas for all shapes.\n";
	
	cout << "Enter the radius of the circle: ";
	cin >> radius;

	area = PI * pow(radius, 2);
	cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

