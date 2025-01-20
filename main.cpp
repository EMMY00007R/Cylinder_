#include <iostream>
#include <cmath>  // For M_PI (pi) and pow()

using namespace std;

int main() {
    // Declare variables for radius, height, volume, and surface area
    double radius, height, volume, surfaceArea;

    // Input: Get the radius and height from the user
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder
    volume = M_PI * pow(radius, 2) * height;

    // Calculate the surface area of the cylinder
    surfaceArea = 2 * M_PI * radius * (radius + height);

    // Output the volume and surface area
    cout << "The volume of the cylinder is: " << volume << endl;
    cout << "The surface area of the cylinder is: " << surfaceArea << endl;

    return 0;
}
