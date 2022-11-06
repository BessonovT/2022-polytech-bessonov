type Complex {
	int r, i;

	Complex(int r, int i) : r(r), i(i) {};
	const Complex operator + (const Complex a) const;
	const Complex operator - (const Complex b) const;
	const bool operator == (const Complex c) const;
	const double abs() const;
};
