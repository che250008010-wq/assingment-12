#include<iostream>
using namespace std;
class Rectangle{
    public:
    float length;
    float breadth;
    Rectangle(){
  length=1;
  breadth=1;
    }
    Rectangle(float l,float b){
        length=l;
        breadth=b;
    }
   
    void display(){
        cout<<"Area of Rectangle is : "<<length*breadth<<endl;
    }
};
int main(){
    Rectangle r1,r2;
        cout<<" enter the length : ";
  cin>>r2.length;
  cout<<" enter the breadth";
  cin>>r2.breadth;
r1.display();
r2.display();





}





