#include<iostream>
using namespace std;
class Complex{ 
 public:
 float real=0;
 float imaginary=0;

 Complex(){
    float real=0;
    float imaginary=0;
 }
 Complex(float real){
    this->real=real;
    float imaginary=0;

 }
 Complex(float real,float imaginary){
    this->real=real;
    this->imaginary=imaginary;
 }
    void display(){
        cout<<"The complex number is: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
 
};
int main(){
  float real;
  float imginary;
    Complex c1;
    c1.display();
   Complex c2;
   cout<<"Enter real Part is: ";
   cin>>c2.real;
   c2.display();
   Complex c3;
   cout<<"Enter real Part is: ";
   cin>>c3.real;
   cout<<"Enter imaginary is: ";
   cin>>c3.imaginary;
    c3.display();
}



