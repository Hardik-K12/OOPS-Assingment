#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:

    // Store the real and imaginary parts
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    // Display the complex number
    void display()
    {
        if(img > 0)
            cout << real << " + i" << img;
        else
            cout << real << " - i" << -img;
    }

    // Add two complex numbers
    Complex add(Complex X)
    {
        Complex sum;
        sum.real = real + X.real;
        sum.img = img + X.img;
        return sum;
    }

    // Subtract two complex numbers
    Complex subtract(Complex X)
    {
        Complex diff;
        diff.real = real - X.real;
        diff.img = img - X.img;
        return diff;
    }

    // Multiply two complex numbers
    Complex multiply(Complex X)
    {
        Complex mul;
        mul.real = (real * X.real) - (img * X.img);
        mul.img = (real * X.img) + (img * X.real);
        return mul;
    }

    // Divide two complex numbers
    Complex divide(Complex X)
    {
        Complex div;
        int den = (X.real * X.real) + (X.img * X.img);

        div.real = ((real * X.real) + (img * X.img)) / den;
        div.img = ((img * X.real) - (real * X.img)) / den;

        return div;
    }

    // Find the complex conjugate
    Complex conjugate()
    {
        Complex con;
        con.real = real;
        con.img = -img;
        return con;
    }
};

int main()
{
    Complex C1, C2, C3;

    cout << "C1 object is created\n";
    C1.accept(3, 5);
    C1.display();

    cout << "\n\nC2 object is created\n";
    C2.accept(7, 5);
    C2.display();

    cout << "\n\nAddition of Complex Numbers\n";
    C3 = C1.add(C2);
    C3.display();

    cout << "\n\nSubtraction of Complex Numbers\n";
    C3 = C1.subtract(C2);
    C3.display();

    cout << "\n\nMultiplication of Complex Numbers\n";
    C3 = C1.multiply(C2);
    C3.display();

    cout << "\n\nDivision of Complex Numbers\n";
    C3 = C1.divide(C2);
    C3.display();

    cout << "\n\nConjugate of First Complex Number\n";
    C3 = C1.conjugate();
    C3.display();

    return 0;
}
