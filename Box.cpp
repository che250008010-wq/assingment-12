#include <iostream>
using namespace std;
class Box{
    public:
    float length=1;
    float breadth=1;
    float height=1;
    Box(){
      float lenght=1;
      float breadth =1;
      float height =1;
    }
     Box(float height){
      float lenght=1;
       float breadth =1;
        this->height=height;
    }
    Box(float l,float b,float h){
        length=l;
        breadth=b;
        height=h;
    }
void volume(){
    cout<<"The volume is: "<<length*breadth*height<<endl;
}


};
int main(){
 Box b1;
 b1.volume();
  Box b2;
  cout<<"Enter height : ";
  cin>>b2.height;
 b2.volume();
 Box b3;
 cout<<"Enter length : ";
  cin>>b3.length;
  cout<<"Enter breadth : ";
  cin>>b3.breadth;
  cout<<"Enter height : ";
  cin>>b3.height;
  b3.volume();
 return 0;
}


