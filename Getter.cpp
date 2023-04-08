#include<iostream>
using namespace std;
class hero{
    public:
    int health;
    char level;
    
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    };
int main(){
    hero ramesh;
    cout<<"health of ramesh"<<ramesh.gethealth<<endl;
    cout<<"level of ramesh "<<ramesh.getlevel<<endl;
}
