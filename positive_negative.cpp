#include<iostream>
using namespace std;
int main(){
    int x;

    cout<<"Enter the two number:";
    cin>>x;
    if(x>0){
        cout<<"This is a positive number.."<<endl;

    }else if(x<0){
        cout<<"This is a negative number.."<<endl;
    }else{
        cout<<"This the number Zero..'0'.."<<endl;
    }



    return 0;
}
