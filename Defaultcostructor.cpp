#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    string gender;
};
int main(){
  student s1;
  s1.name="FARZAN";
  s1.age=21;
  s1.gender="male";
  cout<<"s1 name " <<s1.name<<endl;
  cout<<"s1 age "<<s1.age<<endl;
  cout<<"s1 gender "<<s1.gender<<endl;
}
