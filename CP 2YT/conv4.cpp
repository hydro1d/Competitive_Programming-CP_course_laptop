#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int people;
    int sum_p = 0;


    for (int i = 0; i < n; ++i) {
        cin >> people;
        sum_p = sum_p + people;
    }


    int ncars;
    
    ncars = (sum_p/5) + (sum_p%5 !=0);

    cout << ncars << endl;

    return 0;
}
