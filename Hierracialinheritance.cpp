////////////////////Hierarcial inheritance///////////////////
#include<iostream>
using namespace std;
class a{
    public:
    void func1(){
        cout<<"inside class a"<<endl;
    }
};
class b:public a{
    public:
    void func2(){
        cout<<"inside class b"<<endl;
    }
};
class c:public a{
    public:
    void func3(){
        cout<<"inside class c"<<endl;
    }
};
int main(){
    a object1;
    object1.func1();
   
    
    b object2;
    object2.func2();
    object2.func1();
    
    c object3;
    object3.func1();
    object3.func3();
    
}

