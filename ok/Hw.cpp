/*Create a class admission with static data member number. Build a static member function
admitOne() to increase number by one when one student gets admitted. Another non-
member function (friend function) admitGroup() to increase the number by five when
group get admitted. Write a complete code to display the total number when two individual
students get admitted along with 2 set of groups of students.*/
#include <iostream>
using namespace std;

class admission {
    static int num;

public:
    static void admitOne() {
        num++;
    }

    friend void admitGroup();
    static void display() {
        cout << "Total number of students admitted: " << num << endl;
    }
};

int admission::num = 0;

void admitGroup() {
    admission::num += 5;
}

int main() {
    admission::admitOne();
    admission::admitOne();
    admitGroup();
    admitGroup();
    admission::display();
    return 0;
}
