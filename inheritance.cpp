#include<iostream>
using namespace std;

class human{
    public :
     string gender;
     int age;
     float weight;

     public:
     int getage(){
        return this->age;

     }
     int setweight (int w){
        this->weight =w;
     }

};

class male: public human{
    public:
    string color;
    void walk(){
        cout<<"this male is walking"<<endl;
    }
}

 int main(){

    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
4
    cout <<obj1.walk<<endl;


    return 0;
}