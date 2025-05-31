#include<iostream>
using namespace std;

int add(int a,int b){
    return(a+b);
}

float add(float a,float b){
    return(a+b);
}

int add(int a, int b, int c){
    return(a+b+c);
}
int main(){
    
    cout<<add(5,6);
    cout<<add(1.2f, 5.6f);
    cout<<add(1,2,3);

    
   
    return 0;
}