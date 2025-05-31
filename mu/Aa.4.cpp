#include<iostream>
using namespace std;

class complex{
    int real,img;

public:
    complex(){
        real=0;
        img=0;
    }
    complex(int a,int b){
        real=a;
        img=b;
    }
    void input(){
        cout<<"Enter the numbers:";
        cin>>real>>img;
    }
    void display(){
        cout<<real<<img;
    }
    void add(complex c1, complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
};

int main(){
    complex c1,c2(5,6),c3;
    c1.input();
    c3.add(c1,c2);
    c3.display();
    return 0;
}

