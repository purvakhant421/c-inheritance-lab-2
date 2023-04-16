#include <iostream>

using namespace std;

// Base class 1
class Number1 {
public:
    int num1;

public:
    // Constructor with one parameter
    Number1(int n1) : num1(n1) {
        cout << "Number1 Constructor with one parameter called." << endl;
    }
};

// Base class 2
class Number2 {
public:
    int num2;

public:
    // Constructor with one parameter
    Number2(int n2) : num2(n2) {
      cout << "Number2 Constructor with one parameter called." << endl;
    }
};

// Derived class inheriting from Number1 and Number2
class Sum : public Number1, public Number2 {
public:
    int num3;
    int num4;

public:
    // Constructor with four parameters
    Sum(int n1, int n2, int n3, int n4) : Number1(n1), Number2(n2), num3(n3), num4(n4) {
        cout << "Sum Constructor with four parameters called." << endl;
    }

    // Function to calculate sum of four numbers
    int calculateSum() {
        return num1 + num2 + num3 + num4;
    }
};

int main() {
    // Creating an object of Sum class
    Sum sum(1, 2, 3, 4);

    // Calculating and displaying the sum of four numbers
    int total = sum.calculateSum();
    cout << "Sum of four numbers: " << total << endl;

    return 0;
}
