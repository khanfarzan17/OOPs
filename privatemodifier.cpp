#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    private:
    char level;
};
int main(){
    hero ramesh;
    cout<<"health of "<<ramesh.health<<endl;
    cout<<"level of "<<ramesh.level<<endl;
}
