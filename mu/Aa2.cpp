#include<iostream>
using namespace std;

class marks{
    int cp,sports,HW,Music,totalmarks;

    public:
    void eca(){
        cout<<"Enter the marks of sports and Music:";
        cin>>sports>>Music;   
    }
    void aca(){
        cout<<"Enter the marks of classroom performance, Homework:";
        cin>>cp>>HW;
    }
    void calculate(){
       totalmarks=cp+sports+HW,Music;
    }
    void output(){
        cout<<"The total marks of eca and academic is:"<<totalmarks;
    }
};
int main(){
    marks m1;
    m1.eca();
    m1.aca();
    m1.calculate();
    m1.output();

    return 0;
}
    
   

