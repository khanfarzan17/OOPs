/////////////////////Inheritance Ambidity//////////////////
#include<iostream>
using namespace std;
class a{
    public:
    void name(){
        cout<<" my name is alok"<<endl;
    }
};
class b{
    public:
    
    void name(){
        cout<<" my name is anushka "<<endl;
    }
};
class c:public a,public b{
    
};
int main(){
    c object;
    
    // object.name;
    object.a::name();
    object.b::name();
    
}
