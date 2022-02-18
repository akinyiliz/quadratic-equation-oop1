//PROGRAM TO FIND THE ROOTS OF A QUADRATIC EQUATION USING ITS FORMULA

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "FINDING THE ROOTS OF A QUADRATIC EQUATION" << endl;
    cout << "-----------------------------------------" << endl;
    
    //Variable declarations
    float a, b, c, discriminant, root1, root2, real, imaginary;
    
    //Inputing the coefficients
    cout << "Quadratic Equation : ax^2 + bx + c"<< endl;
    cout << "Enter coefficient of a : ";
    cin >> a;
    cout << "Enter coefficient of b : ";
    cin >> b;
    cout << "Enter coefficient of c : ";
    cin >> c;
    
    //Calculating the discriminant
    discriminant = (b * b) - (4 * a * c);
    
    //Calculations
    if (discriminant > 0)
    {
        cout << "Roots are real and distinct" << endl;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and same" << endl;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root1;  
    }
    else
    {
        cout << "Roots are complex and distinct " << endl;
        real = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        cout << "Root1 = " << real << " + " << imaginary;
        cout << "Root2 = " << real << " - " << imaginary;
    }
    return 0;
}
