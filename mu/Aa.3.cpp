#include<iostream>
using namespace std;

class Marks {
    int cp, sports, HW, Music, totalmarks;

public:
    void eca();
    void aca();
    void calculate();
    void output();
};

void Marks::eca() {
    cout << "Enter the marks of sports and Music: ";
    cin >> sports >> Music;
}

void Marks::aca() {
    cout << "Enter the marks of classroom performance and Homework: ";
    cin >> cp >> HW;
}

void Marks::calculate() {
    totalmarks = cp + sports + HW + Music;
}

void Marks::output() {
    cout << "The total marks of eca and academic is: " << totalmarks;
}

int main() {
    Marks m1;

    m1.eca();
    m1.aca();
    m1.calculate();
    m1.output();

    return 0;
}
