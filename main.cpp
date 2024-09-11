//This is a program to calculate area and circumference

#include <iostream>

using namespace std;

int main() {
    
    //Variables
    double side;
    double area;
    double circumf;
    
    //get radius from the user
    cout << "Enter the side of the square: ";
    cin >> side;
    
    //Calculate area and circumference
    area = side * side;
    circumf = 4 * side;
    
    //Output results
    cout << "Area of the square:" <<area << endl;
    cout << "Circumference of the square: " <<circumf << endl;
    
    return 0;
    
}