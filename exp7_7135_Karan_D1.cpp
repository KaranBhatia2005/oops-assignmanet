#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

Complex operator+(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex sum = c1 + c2;

    cout << "Sum of ";
    c1.display();
    cout << " and ";
    c2.display();
    cout << " is ";
    sum.display();
    cout << endl;

    return 0;
}
