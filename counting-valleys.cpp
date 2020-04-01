#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int valleys = 0, lvl = 0;
    bool isValley = false;
    for (char c : s){
        if (c == 'U') lvl++;
        else if (c == 'D') lvl--;
        if (lvl == 0 && c == 'U') valleys++;
    }
    return valleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    cout << result << "\n";

    fout << result << "\n";

    fout.close();

    return 0;
}
