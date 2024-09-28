#include <iostream>

class Complex {
private:
    float real;      // Real part of the complex number
    float imag;      // Imaginary part of the complex number

public:
    // Constructor to initialize the complex number
    Complex(float r = 0.0f, float i = 0.0f) : real(r), imag(i) {}

    // Function to add two complex numbers
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract two complex numbers
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to multiply two complex numbers
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Function to divide two complex numbers
    Complex operator/(const Complex& other) const {
        float denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    // Function to get the real part of the complex number
    float getReal() const {
        return real;
    }

    // Function to get the imaginary part of the complex number
    float getImaginary() const {
        return imag;
    }

    // Function to display the complex number
    void display() const {
        std::cout << real;
        if (imag >= 0) {
            std::cout << " + " << imag << "i" << std::endl;
        } else {
            std::cout << " - " << -imag << "i" << std::endl;
        }
    }
};

int main() {
    // Creating complex numbers
    Complex c1(3.0f, 4.0f);
    Complex c2(1.0f, 2.0f);

    // Performing operations
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    // Displaying results
    std::cout << "c1: ";
    c1.display();

    std::cout << "c2: ";
    c2.display();

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "Quotient: ";
    quotient.display();

    return 0;
}
