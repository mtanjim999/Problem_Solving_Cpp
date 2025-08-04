#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of contestants and cutoff position (n k): ";
    cin >> n >> k;

    vector<int> scores(n);
    cout << "Enter scores of contestants: ";
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff = scores[k - 1]; // k-th score (1-based)

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) {
            count++;
        }
    }

    cout << "Number of contestants advancing to next round: " << count << endl;

    return 0;
}
