#include<iostream>
using namespace std;

class hero:
{
    private:
    int health;

    public:
    char level;


    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;

    }

char getlevel(){
     return health;

}
void sethealth(int h) {
    health=h;

}
void setlevel(int h){
    level=ch;

};
int main(){
    //creation of object
    hero ansh;
    ansh.health= 143;
    ansh.level='A';

    cout<<"health is:"<< ansh.health<<endl;
     cout<<"level is:"<< ansh.level<<endl;

}
}








}