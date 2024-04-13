#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    
    while (tc--) {
        int handSize;
        cin >> handSize;
        //note kor: vector<int> is used here to dynamically store 
        //the cards in the player's hand, allowing for easy access and manipulation of the cards.        
        vector<int> playerHand(handSize);
        
        //note kor2: vector<int> is used here to efficiently track the status of cards on the table
        // and determine whether a card played by the player is already on the table or not.
        vector<int> tableStatus(handSize + 1, 0);
        
        for (int i = 0; i < handSize; i++) {
            cin >> playerHand[i];
        }
        
        int tPoints = 0;
        
        for (int i = 0; i < handSize; i++) {
            int currentCard = playerHand[i];
            if (tableStatus[currentCard] == 0) {
                tableStatus[currentCard] = 1;
            } else {
                tPoints++;
                tableStatus[currentCard] = 0;
            }
        }
        
        cout << tPoints << endl;
    }
    
    return 0;
}
