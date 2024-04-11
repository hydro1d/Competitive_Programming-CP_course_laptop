#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        string l;
        cin >> n >> l;

        int motlp = 0;

        for (int j = 0; j < n; j++) {
            if (l[j] == '1') {
                ++motlp;
            }
        }

        if (motlp % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        bool pacchi = true;

        if (motlp == 2) {
            for (int j = 0; j < n - 1; j++) {
                if (l[j] == '1' && l[j + 1] == '1') {
                    pacchi = false;
                    break;
                }
            }
        }

        cout << (pacchi ? "YES" : "NO") << endl;
    }

    return 0;
}

//explanation
/* Input**:
    - The program starts by reading an integer `test`, which represents the number of test cases.
    - Each test case consists of two inputs:
        - An integer `n` representing the length of a string.
        - A string `l` containing characters ('0' or '1').
 **Processing**:
    - For each test case, the program calculates the number of '1's in the string `l` and stores it in the variable `motlp`.
    - It then checks whether `motlp` is odd (i.e., not divisible by 2). If so, it prints "NO" and continues to the next test case.
    - Otherwise, it proceeds to further analysis.
 **Additional Analysis**:
    - If `motlp` equals 2, the program examines adjacent characters in the string `l`.
        - If there are two consecutive '1's, it sets the boolean variable `pacchi` to false.
        - Otherwise, it leaves `pacchi` as true.
    - If `pacchi` is true, it prints "YES"; otherwise, it prints "NO".
  **Output**:
    - The program repeats this process for all test cases and provides the corresponding output.
In summary, the code checks whether a given binary string meets certain conditions (number of '1's and adjacent '1's)
 and outputs "YES" or "NO" accordingly. It's used to determine whether a specific pattern exists in the input string. */