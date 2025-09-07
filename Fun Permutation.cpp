#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i=0;i<n;i++) cin >> p[i];

        // q = [2,3,...,n,1]
        for(int i=0;i<n;i++){
            cout << (i+2 <= n ? i+2 : 1);
            if(i+1<n) cout << " ";
        }
        cout << "\n";
    }
}

