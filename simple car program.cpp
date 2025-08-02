#include<iostream>
#include<string>
using namespace std;

class car{
  private:
    string brand;
    int speed;
  public:
    void setBrand(string b){
      brand = b;
    }
    void setSpeed(int s){
      speed = s;
    }
    void showDetails(){
      cout << "Brands:" << brand << endl;
      cout << "Speed:" << speed <<"km/h"<< endl;
    }

};

int main(){
  car mine;
  mine.setBrand("Lamborginni");
  mine.setSpeed(300);
  mine.showDetails();

  return 0;
}
