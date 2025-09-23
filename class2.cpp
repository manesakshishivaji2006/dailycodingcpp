#include<iostream>
using namespace std;
 
class hero{
     public:
     int health;
     char level;
     void print(){
        cout<<level<<endl;

     }
};

int main(){
    //creation of object
    hero ansh;
    ansh.health= 143;
    ansh.level='A';

    cout<<"health is:"<< ansh.health<<endl;
     cout<<"level is:"<< ansh.level<<endl;

}