#include<iostream>
using namespace std;
class hero{
    public:
    
    int health;
    char level;
    
};
int main(){
  hero ramesh;
  ramesh.health=90;
  ramesh.level='A';
  cout<<"health of "<<ramesh.health<<endl;
  cout<<"level of "<<ramesh.level<<endl;
}
