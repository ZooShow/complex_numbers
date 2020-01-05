#include "lib.h"
#include <iostream>

Complex operator+ (const Complex a, Complex b){
    Complex result = a;
    result.a += b.a;
    result.b += b.b;
    return result;
}

Complex operator- (const Complex a, Complex b){
    Complex result;
    result.a = a.a - b.a;
    result.b = a.b - b.b;
    return result;
}

Complex operator* (const Complex a, Complex b){
    Complex result;
    result.a = a.a * b.a - a.b * b.b;
    result.b = a.a * b.b + a.b * b.b;
    return result;
}

Complex operator / (const Complex a, Complex b){
    Complex result;
    result.a = (a.a*b.a + a.b*b.b)/(b.a*b.a + b.b*b.b);
    result.b = (a.b*b.a - a.a*b.b)/(b.a*b.a + b.b*b.b);
    return result;
}

bool operator==(const Complex a, const Complex b) {
    if ((a.a == b.a) && (a.b == b.b)) {
        return true;
    } else return false;
}

bool operator!=(const Complex a, const Complex b) {
    if (!(a.a == b.a) || !(a.b == b.b)) {
        return true;
    } else return false;
}

std::ostream &operator<<(std::ostream &out, Complex a) {
    if (a.b > 0) {
        out << a.a << '+';
        out << a.b<<'i';
    } else if (a.b < 0){
        out << a.a;
        out << a.b<<'i';
    } else {
        out << a.a;
    }
    return out;
}