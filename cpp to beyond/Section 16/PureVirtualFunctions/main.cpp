// Section 16
// Pure virtual functions and abstract base classes

#include <iostream>
#include <vector>

class Shape {                       // Abstract class
private:
    // attributes common to all shapes

public:
    virtual void draw() = 0;        // pure virtual function
    virtual void rotate() = 0;      // pure virtual function
    virtual ~Shape() {}
};

class Open_Shape: public Shape {    // Abstract class
public:
    virtual ~Open_Shape() {}
};

class Closed_Shape: public Shape {  // Abstract class
public:
    virtual ~Closed_Shape() {}

};

class Line: public Open_Shape {     // Concrete class
public: 
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }

};

class Square: public Closed_Shape {
public:
    virtual void draw() override {
        std::cout << "Drawing a Sqaure" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotatin a sqaure" << std::endl;
    }

    virtual ~Square() {}
};


int main() {


    return 0;
}