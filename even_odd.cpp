#include<iostream>
using namespace std;
int main(){
  int num;
  cout << "Inter any number:";
  cin >> num;
  if(num % 2 == 0){
    cout << "This is an EVEN number.." << endl;

  }else{
    cout << "This is an ODD number.."<< endl;
  }

  return 0;
}
