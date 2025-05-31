/*Create two classes with single integer value as data member for each class. Build a function
which is member of one class and friend of another class. Add the integer data member of
two classes using friend function. And display the result in main function.*/
#include <iostream>
using namespace std;

class Normal; 

class Friends {
    int a,b,c;

public:
   void getdata(){
    cout<<"Enter any two integers :";
    cin>>a>>b;
   }

   void cal(){
    c= a+b;
   }

   void showdata(){
    cout<<c;
   }
   friend int totalsum(Friends,Normal);
};


class Normal {
    int e,f,c;

public:
   void getdata(){
    cout<<"Enter other two integers: ";
    cin>>e>>f;
   }
    void cal(){
        c=e+f;
    }

    void showdata(){
        cout<<c;
    }
    friend int totalsum(Friends,Normal);
};

int totalsum(Friends fr, Normal n){
    return(fr.c+n.c);
}


int main() {
    int result;
    Friends fr1;
    Normal n1;
    fr1.getdata();
    fr1.cal();
    n1.getdata();
    n1.cal();
    result=totalsum(fr1,n1);
    cout<<"The total sumof the following is :"<<result;


    return 0;
}
