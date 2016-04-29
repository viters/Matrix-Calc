#include "aghComplex.h"

aghComplex::aghComplex() : re(0), im(0) {}

aghComplex::aghComplex(const double re, const double im) : re(re), im(im) {}

double aghComplex::getRe() const{
    return this->re;
}

double aghComplex::getIm() const{
    return this->im;
}

aghComplex aghComplex::operator+(const aghComplex &another) const{
    return aghComplex( this->re + another.re, this->im + another.im);
}

aghComplex aghComplex::operator-(const aghComplex &another) const{
    return aghComplex( this->re - another.re, this->im - another.im);
}

aghComplex aghComplex::operator*(const aghComplex &another) const{
    return aghComplex( this->re * another.re - this->im * another.im,
                       this->im * another.re + this->im * another.re);
}

bool operator==(const aghComplex &another) const{
    return (this->re == another.re) && (this->im == another.im);
}

bool operator!=(const aghComplex &another) const{
    return (this->re != another.re) || (this->im != another.im);
}
