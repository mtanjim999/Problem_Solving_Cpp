#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int m,n;
        cin>>m>>n;
        if(m==1 || n==1){
            cout<<"No\n"<<endl;
        }else{
            cout<<"Yes\n"<<endl;
        }
    }
    return 0;
}
