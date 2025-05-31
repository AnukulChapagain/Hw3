/*Determine the difference of two distance. Create a class distance with members inch and
feet.*/
#include<iostream>
using namespace std;

class Distance {
    int feet, inch;

public:
    Distance() {
        feet = 0;
        inch = 0;
    }

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    void input() {
        cout << "Enter feet and inches: ";
        cin >> feet >> inch;
    }

    
    int toInches() const {
        return feet * 12 + inch;
    }

    
    void fromInches(int totalInches) {
        feet = totalInches / 12;
        inch = totalInches % 12;
    }
    Distance operator-(const Distance& d) {
        Distance diff;
        int inch1 = this->toInches();
        int inch2 = d.toInches();
        int totalDiff = inch1 - inch2;

      
        if (totalDiff < 0) totalDiff = -totalDiff;

        diff.fromInches(totalDiff);
        return diff;
    }

    void display() {
        cout << "Difference: " << feet << " feet " << inch << " inches\n";
    }
};

int main() {
    Distance d1, d2, d3;
    d1.input();
    d2.input();
   d3 = d1 - d2;  
    d3.display();

    return 0;
}
