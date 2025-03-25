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
        std::cout << "Rotating a sqaure" << std::endl;
    }

    virtual ~Square() {}
};

class Circle: public Closed_Shape {

public:
    virtual void draw() override {
        std::cout << "Drawing a Circle" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating a Circle" << std::endl;
    }

    std::string name = "Crystal";

    void set_name(std::string name) {
        this->name = name;
    }

    std::string get_name() const {
        return name;
    }

    virtual ~Circle() {}
};

void refresh_screen(const std::vector<Shape *> &shape) {
    std::cout << "Refreshing Screen" << std::endl;
    for(const auto p: shape) {
        p->draw();
    }
}

int main() {

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shape {s1,s2,s3};

    refresh_screen(shape);

    return 0;
}