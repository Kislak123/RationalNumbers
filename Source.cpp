#include "Header.h"
#include <iostream>

int NOD(int numerator, int denumerator)
{
    while (numerator > 0 && denumerator > 0)

        if (numerator > denumerator)
            numerator %= denumerator;

        else
            denumerator %= numerator;

    return numerator + denumerator;
}


Rational::Rational(int x, int y) {
    numerator = x;
    denumerator = y;
}

Rational::Rational(int x) {
    numerator = x;
    denumerator = 1;
}

Rational::Rational() {
    numerator = 1;
    denumerator = 1;
}

Rational Rational::neg() {
    
    return Rational(numerator * -1, denumerator);
}

Rational Rational::inv() {
    
    return Rational(denumerator, numerator);
}

Rational Rational::sum(Rational r) {
    
    int newNumerator = ((numerator * r.denumerator) + (r.numerator * denumerator));
    int newDenumerator = denumerator * r.denumerator;
    int newnewNumerator = newNumerator / NOD(newNumerator, newDenumerator);
    int newnewDenumerator = newDenumerator / NOD(newNumerator, newDenumerator);
   return Rational(newnewNumerator, newnewDenumerator);
   
}

Rational Rational::sub(Rational r) {
    
     return sum(r.neg());
}

Rational Rational::mul(Rational r) {
    
    int newNumerator = numerator * r.numerator;
    int newDenumerator = denumerator * r.denumerator;
    int newnewNumerator = newNumerator / NOD(newNumerator, newDenumerator);
    int newnewDenumerator = newDenumerator / NOD(newNumerator, newDenumerator);
    return (newnewDenumerator, newnewNumerator);
    
}

Rational Rational::divede(Rational r) {
    
     return mul(r.inv());
}

bool Rational::eq(Rational r) {
    
    return (numerator == r.numerator && denumerator == r.denumerator);
}

bool Rational::neq(Rational r) {
    
    return !(numerator == r.numerator && denumerator == r.denumerator);
    
}

bool Rational::less(Rational r) {
    
    int newNumber = numerator * r.denumerator;
    int NewNumber = denumerator * r.numerator;
    return (newNumber < NewNumber);
}

bool Rational::more(Rational r) {
    
        int newNumber = numerator * r.denumerator;
        int NewNumber = denumerator * r.numerator;
        return (newNumber > NewNumber);
    }

bool Rational::moreeq(Rational r) {

    
        int newNumber = numerator * r.denumerator;
        int NewNumber = denumerator * r.numerator;
        return ((newNumber > NewNumber) || (numerator == r.numerator && denumerator == r.denumerator));
    }

bool Rational::lesseq(Rational r) {
    
    int newNumber =  numerator * r.denumerator;
    int NewNumber = denumerator * r.numerator;
   return ((newNumber < NewNumber) || (numerator == r.numerator && denumerator == r.denumerator));
}


void Rational::scanf() {
    std::cin >> numerator >> denumerator;
}



void Rational::print() {
    if (denumerator == 1) {
        std::cout << numerator << "\n";
    }
    else {
        std::cout << "(" << numerator << "/" << denumerator << ")\n";
    }
}