#include "Header.h"
#include <iostream>



int main() {
	Rational a;
	a.scanf();
	a.print();
	Rational b;
	b.scanf();
	b.print();
	
	Rational c = a.sum(b);
	std::cout << "+"  << "\n";
	c.print();
	Rational d = a.sub(b);
	std::cout << "-" << "\n";
	d.print();
	Rational e = a.mul(b);
	std::cout << "*" << "\n";
	e.print();
	Rational f = a.divede(b);
	std::cout << "/" << "\n";
	f.print();
	Rational g = a.eq(b);
	std::cout << "==" << "\n";
	g.print();
	Rational h = a.neq(b);
	std::cout << "!=" << "\n";
	h.print();
	Rational i = a.less(b);
	std::cout << "<" << "\n";
	i.print();
	Rational j = a.more(b);
	std::cout << ">" << "\n";
	j.print();
	Rational k = a.moreeq(b);
	std::cout << ">=" << "\n";
	k.print();
	Rational l = a.lesseq(b);
	std::cout << "<=" << "\n";
	l.print();

	
}
