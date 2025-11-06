#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string price;
    Car(string brand,string price){
      this->price=price;
      this->brand=brand;
    }
    void display(){
        cout<<this->brand<<"   "<<this->price<<endl;
    }
};

int main(){
    Car c1("Defender","25000000");
    Car c2("BMW","1000000");
  c1.display();
  c2.display();
}
