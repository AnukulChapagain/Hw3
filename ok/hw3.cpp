/*Calculate the product of two complex numbers. Create a class complex with members real
and imaginary. Add default constructor and parameterized constructor to it. Build display
function to display the complex number in appropriate format. And implement the operator
(*) overloading to determine the product of complex number.*/
#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(){
        real=0;
        img-0;
    }
    Complex(int a, int b){
        real=a;
        img=b;

    }
    void showdata(){
        cout<<real<<"+"<<img<<"i";
    }
    Complex operator *(Complex c){
        Complex temp;
        temp.real=real*c.real-img*c.img;
        temp.img=real*c.img+img*c.real;
        return temp;
    }
};
int main(){
    Complex c1(8,9),c2(10,11),c3;
    c3=c1*c2;
    c3.showdata();
    return 0;

}
