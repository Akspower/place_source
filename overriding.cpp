#include <iostream>
using namespace std;


class Animal {
public:
    
    virtual void sound() {      //just due to virtual it decide on runtime otherwise it always call deriver class
        cout << "This is a generic animal sound." << endl;
    }
};


class Dog : public Animal {
public:
    
    void sound()  {
        cout << "Woof Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    
    void sound()  {
        cout << "Meow Meow!" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();  // Base class pointer pointing to derived class object
    Animal* animal2 = new Cat();

    animal1->sound();  // Calls Dog's sound method             when pointer we have to use arrow operator to call
    animal2->sound();  // Calls Cat's sound method

    delete animal1;
    delete animal2;

    return 0;
}
