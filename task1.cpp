#include <iostream>
#include <cmath>
using namespace std;

// Outer class: Calculator
class Calculator {
public:
    class Operations {
    public:
        static double add(double a, double b) { return a + b; }
        static double subtract(double a, double b) { return a - b; }
        static double multiply(double a, double b) { return a * b; }
        static double divide(double a, double b) { return (b != 0) ? (a / b) : 0; }
    };
};

// Outer class: Student
class Student {
private:
    string name;
    int ID;
    char grade;
public:
    Student(string n, int id, char g) : name(n), ID(id), grade(g) {}
    void display() {
        cout << "Student Name: " << name << ", ID: " << ID << ", Grade: " << grade << endl;
    }
};

// Outer class: Rectangle
class Rectangle {
public:
    class AreaCalculator {
    public:
        static double calculate(double length, double width) { return length * width; }
    };
};

// Outer class: Counter
class Counter {
private:
    int count;
public:
    Counter() : count(0) {}
    void increment() { count++; }
    int getCount() { return count; }
};

// Outer class: Point
class Point {
private:
    double x, y;
public:
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}
    class DistanceCalculator {
    public:
        static double distanceFromOrigin(double x, double y) { return sqrt(x*x + y*y); }
    };
    void displayDistance() {
        cout << "Distance from origin: " << DistanceCalculator::distanceFromOrigin(x, y) << endl;
    }
};

int main() {
    // Calculator usage
    cout << "Addition: " << Calculator::Operations::add(5, 3) << endl;
    cout << "Subtraction: " << Calculator::Operations::subtract(5, 3) << endl;
    cout << "Multiplication: " << Calculator::Operations::multiply(5, 3) << endl;
    cout << "Division: " << Calculator::Operations::divide(5, 3) << endl;
    
    // Student usage
    Student s("John Doe", 12345, 'A');
    s.display();
    
    // Rectangle usage
    cout << "Rectangle Area: " << Rectangle::AreaCalculator::calculate(5, 10) << endl;
    
    // Counter usage
    Counter c;
    c.increment();
    c.increment();
    cout << "Counter Value: " << c.getCount() << endl;
    
    // Point usage
    Point p(3, 4);
    p.displayDistance();
    
    return 0;
}

