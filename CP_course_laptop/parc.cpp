#include<bits/stdc++.h>
using namespace std;

int main()
{
    int round;
    cin >> round;
    while (round--) {
        int N, M, Mi;
        cin >> N >> M >> Mi;

        vector<int> dif(N);
        for (int j = 0; j < N; j++) {
            cin >> dif[j];
        }

        sort(dif.begin(), dif.end());

        int time_needed = 0;
        int solved = 0;
        
        for (int j = 0; j < N; j++) {
            time_needed = time_needed + dif[j];
            if (time_needed <= M) {
                solved ++;
            } else {
                break;
            }
        }

        if (solved >= Mi) {
            cout << "ESCAPE THE ROOM!" << endl;
        } else {
            cout << "OPPS!" << endl;
        }
    }
    return 0;
}
