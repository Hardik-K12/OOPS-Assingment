
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function overriding
    void sound() {
        cout << "Dog barks" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Function overriding
    void sound() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    // Creating base class pointer
    Animal *ptr;

    Dog d;
    Cat c;

    // Pointer points to Dog object
    ptr = &d;
    ptr->sound();

    // Pointer points to Cat object
    ptr = &c;
    ptr->sound();

    return 0;
}
