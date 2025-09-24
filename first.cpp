#include<iostream>
using namespace std;
 
class customer
{
    string name;
    int acc_no;
    float bal;
    public:

//default constructor
customer()
{
    name="rohit";
    acc_no= 55;
    bal=234;
}
 void display()
    {
  cout<< name<<""<<acc_no<<""<<bal<<endl;
    }

};


int main()
{
customer A1,A2;
A1.display();
A2.display();



}