#include<iostream>
#include<string>
using namespace std;
void count(string s, int i){
        if(i<0){
            return;
        }
        cout<<s[i];
        count(s,i-1);
    }
int main(){
    string word;
    cin>>word;

    count(word,word.length()-1);

    return 0;
}
