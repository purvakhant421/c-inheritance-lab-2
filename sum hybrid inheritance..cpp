#include <iostream>

using namespace std;


class Number1 {
public:
    int num1;

public:
   
    Number1(int n1) : num1(n1) {
        cout << "Number1 Constructor with one parameter called." << endl;
    }
};

class Number2 {
public:
    int num2;

public:
    
    Number2(int n2) : num2(n2) {
      cout << "Number2 Constructor with one parameter called." << endl;
    }
};


class Sum : public Number1, public Number2 {
public:
    int num3;
    int num4;

public:
    
    Sum(int n1, int n2, int n3, int n4) : Number1(n1), Number2(n2), num3(n3), num4(n4) {
        cout << "Sum Constructor with four parameters called." << endl;
    }

    
    int calculateSum() {
        return num1 + num2 + num3 + num4;
    }
};

int main() {
    
    Sum sum(1, 2, 3, 4);
    
    int total = sum.calculateSum();
    cout << "Sum of four numbers: " << total << endl;

    return 0;
}
