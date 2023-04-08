/////////////////////Inheritance Ambidity//////////////////
#include<iostream>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"My name is farzan"<<endl;
    }
};
class b{
    public:
    void fun(){
        cout<<"my name is alok"<<endl;
    }
};
class c:public a,public b{
    
};
int main(){
    c obj;
    // obj.fun()
    obj. a::fun();
    obj.b::fun();
}
