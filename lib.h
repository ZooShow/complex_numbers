
#include <iostream>

struct Complex{
    float a;
    float b;
};

Complex operator+(Complex a, Complex b);
Complex operator-(Complex a, Complex b);
Complex operator/(Complex a, Complex b);
Complex operator*(Complex a, Complex b);
bool operator==(Complex a, Complex b);
bool operator!=(Complex a, Complex b);

std::ostream &operator<<(std::ostream &out, Complex a);