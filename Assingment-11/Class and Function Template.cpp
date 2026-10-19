
#include <iostream>
#include <string>
using namespace std;

// Function template to find the maximum value
template <class T>
T maximumValue(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

// Class template to store and display a value
template <class T>
class Box
{
    T value;

public:
    // Constructor to store the value
    Box(T v)
    {
        value = v;
    }

    // Function to display the value
    void display()
    {
        cout << "Box value = " << value << endl;
    }
};

int main()
{
    // Using function template with integers
    cout << "Maximum integer = "
         << maximumValue(20, 25) << endl;

    // Using function template with double values
    cout << "Maximum double = "
         << maximumValue(5.5, 3.2) << endl;

    // Using class template with integer
    Box<int> b1(100);
    b1.display();

    // Using class template with string
    Box<string> b2("C++ Templates");
    b2.display();

    return 0;
}

