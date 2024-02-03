/*
E1. Support following operators to be overloaded for Complex numbers :
	a. Subtraction.
	b. Multiplication.
	c. pre and post decrement.
	d. Display Complex number. Hint: cout << obj.  
*/

#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double imag;

    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overload the subtraction operator
    Complex operator-(const Complex& b) {
        Complex result;
        result.real = real - b.real;
        result.imag = imag - b.imag;
        return result;
    }

    // Overload the multiplication operator
    Complex operator*(const Complex& b) {
        Complex result;
        result.real = real * b.real - imag * b.imag;
        result.imag = real * b.imag + imag * b.real;
        return result;
    }

    // Overload the pre-decrement operator
    Complex& operator--() {
        --real;
        --imag;
        return *this;
    }

    // Overload the post-decrement operator
    Complex operator--(int) {
        Complex temp(real, imag);
        real--;
        imag--;
        return temp;
    }

    // Overload the << operator to display a complex number
    friend ostream& operator<<(ostream& os, const Complex& c);
};

// Overload the << operator to display a complex number
ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real;
    if (c.imag < 0)
        os << " - " << abs(c.imag) << "i";
    else
        os << " + " << c.imag << "i";
    return os;
}

int main() {
    Complex c1(4, 5), c2(2, 3);
    
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    cout << "c1 - c2: " << c1 - c2 << endl;
    
    cout << "c1 * c2: " << c1 * c2 << endl;

    cout << "--c1: " << --c1 << endl;

    cout << "c2--: " << c1-- << endl;
    
    return 0;
}