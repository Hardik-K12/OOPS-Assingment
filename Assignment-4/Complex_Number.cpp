#include<iostream>
using namespace std;

class Complex
{
    float real, imag;

public:

    // Take complex number values
    void accept()
    {
        cout<<"Enter real part: ";
        cin>>real;

        cout<<"Enter imaginary part: ";
        cin>>imag;
    }

    // Display complex number
    void display()
    {
        cout<<real;

        if(imag>=0)
            cout<<" + "<<imag<<"i";
        else
            cout<<" - "<<-imag<<"i";

        cout<<endl;
    }

    // Add two complex numbers
    Complex add(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }

    // Subtract two complex numbers
    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imag=imag-c.imag;
        return temp;
    }

    // Multiply two complex numbers
    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real=(real*c.real)-(imag*c.imag);
        temp.imag=(real*c.imag)+(imag*c.real);
        return temp;
    }

    // Divide two complex numbers
    Complex divide(Complex c)
    {
        Complex temp;
        float d=(c.real*c.real)+(c.imag*c.imag);

        temp.real=((real*c.real)+(imag*c.imag))/d;
        temp.imag=((imag*c.real)-(real*c.imag))/d;

        return temp;
    }

    // Find complex conjugate
    Complex conjugate()
    {
        Complex temp;
        temp.real=real;
        temp.imag=-imag;
        return temp;
    }
};

int main()
{
    Complex c1,c2,result;

    cout<<"Enter first complex number:\n";
    c1.accept();

    cout<<"\nEnter second complex number:\n";
    c2.accept();

    result=c1.add(c2);
    cout<<"\nAddition: ";
    result.display();

    result=c1.subtract(c2);
    cout<<"Subtraction: ";
    result.display();

    result=c1.multiply(c2);
    cout<<"Multiplication: ";
    result.display();

    result=c1.divide(c2);
    cout<<"Division: ";
    result.display();

    result=c1.conjugate();
    cout<<"Conjugate of first number: ";
    result.display();

    return 0;
}
