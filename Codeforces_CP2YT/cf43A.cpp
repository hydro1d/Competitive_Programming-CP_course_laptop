#include <bits/stdc++.h>

using namespace std;

int main() {
    int numMatches;
    cin >> numMatches;

    map<string, int> teamGoals;
    string teamName, winningTeam;
    int maxGoals = 0;

    for (int i = 0; i < numMatches; ++i) {
        cin >> teamName;
        teamGoals[teamName]++;
        if (teamGoals[teamName] > maxGoals) {
            maxGoals = teamGoals[teamName];
            winningTeam = teamName;
        }
    }

    cout << winningTeam << endl;

    return 0;
}
