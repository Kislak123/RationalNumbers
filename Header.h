#pragma once


class Rational {
public:




    Rational(int x, int y);

    Rational();

    Rational(int x);

   
    
    Rational neg();
    Rational inv();

    Rational sub(Rational r);
    Rational sum(Rational r);
    Rational mul(Rational r);
    Rational divede(Rational r);

    bool eq(Rational r);
    bool neq(Rational r);
    bool more(Rational r);
    bool less(Rational r);
    bool lesseq(Rational r);
    bool moreeq(Rational r);
    
    void scanf();
    void print();
    

private:
    int numerator;
    int denumerator;
    
    
};