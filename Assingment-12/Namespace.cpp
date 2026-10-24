#include <iostream>
using namespace std;

// First namespace for addition
namespace P1
{
    // Function to add two numbers
    int add(int m, int n)
    {
        return m + n;
    }
}

// Second namespace for subtraction
namespace P2
{
    // Function to subtract two numbers
    int subtract(int m, int n)
    {
        return m - n;
    }
}

int main()
{
    // Display the addition result using P1 namespace
    cout << "Addition = ";
    cout << P1::add(5, 5) << endl;

    // Display the subtraction result using P2 namespace
    cout << "Subtraction = ";
    cout << P2::subtract(5, 2);

    return 0;
}
