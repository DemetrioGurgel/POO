#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    public:
        Complex(double real = 0.0, double imaginary = 0.0);
        Complex operator+(const Complex &right) const;
        Complex operator-(const Complex &right) const;
        Complex operator+=(const Complex &right);
        Complex operator-=(const Complex &right);
        Complex operator++();
        Complex operator--();
        void print() const;

    private:
        double real;
        double imaginary;
};

#endif