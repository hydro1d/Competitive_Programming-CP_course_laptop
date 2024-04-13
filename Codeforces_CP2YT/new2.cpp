#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k, q;
        cin >> k >> q;

        vector<int> a(k);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }

        vector<int> n(q);
        for (int i = 0; i < q; ++i) {
            cin >> n[i];
        }

        for (int i = 0; i < q; ++i) {
            queue<int> players;
            for (int j = 1; j <= n[i]; ++j) {
                players.push(j);
            }

            int index = 0;
            while (!players.empty()) {
                int roundSize = min((int)players.size(), a[index]);
                for (int j = 0; j < roundSize; ++j) {
                    players.pop();
                }
                index = (index + 1) % k;
            }

            cout << players.size() << " ";
        }
        cout << endl;
    }

    return 0;
}
