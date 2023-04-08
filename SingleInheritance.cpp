//Single inheritance//
#include<iostream>
using namespace std;
class account{
   public:
    int salary=90000;
};
class engineer:public account{
    public:
    int bounus=800;
    
};
int main(){
    engineer e1;
    cout<<"salary  "<<e1.salary<<endl;
    cout<<"bounus "<<e1.bounus<<endl;
    return 0;
}
