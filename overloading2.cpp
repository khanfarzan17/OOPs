//////////////////////////////////// function overloading with different argument////////////////////////////
#include<iostream>
using namespace std;
int add(int num1,int num2){
    return num1+num2;
};
double add(double num1,double num2,double num3){
    return num1+num2+num3;
};
int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10.6,45.9)<<endl;
    return 0;
}