
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int z = 9;
        while(x>0){
            int y = x%10;
            if (y<z) z = y;
            x /= 10;
        }
        cout<<z<<"\n"<<endl;
    }
    return 0;
}
