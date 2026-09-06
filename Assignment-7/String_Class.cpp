#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char str[100];

public:

    // Default constructor
    String()
    {
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char s[])
    {
        strcpy(str, s);
    }

    // Accept string from user
    void accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Display the string
    void display()
    {
        cout << "The string is: " << str << endl;
    }

    // Destructor
    ~String()
    {
        cout << "Destructor called";
    }
};

int main()
{
    String s1;

    s1.accept();
    s1.display();

    return 0;
}
