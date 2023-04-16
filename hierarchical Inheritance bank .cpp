#include <iostream>

using namespace std;


class RBI {
public:
 int rate; 

public:
    RBI (int r) {
        rate = r;
    }

    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};

class SBI : public RBI {
public:
    SBI (int r) : RBI(r) {}
};

class BOB : public RBI {
public:
    BOB (int r) : RBI(r) {}
};

class ICICI : public RBI {
public:
    ICICI (int r) : RBI(r) {}
};

int main() {
    SBI sbi(5); 
    BOB bob(6); 
    ICICI icici(5); 

    cout << "Rate of Interest for SBI: ";
    sbi.getROI();
    cout << "Rate of Interest for BOB: ";
    bob.getROI();
    cout << "Rate of Interest for ICICI: ";
    icici.getROI();

    return 0;
}
