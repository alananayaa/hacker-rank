#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    /*
     * Write your code here.
     */
    string cTime = "";
    int h1 = (int)s[1] - '0'; 
    int h2 = (int)s[0] - '0'; 
    int hh = (h2 * 10 + h1 % 10);

    if (s[8] == 'A'){
        if ( hh == 12){
            cTime = "00";
            for (int i = 2; i < 8; i++) cTime += s[i];
        }else for(int i = 0; i < 8; i++) cTime += s[i];;
    }else if (s[8] == 'P'){
        if (hh == 12) for (int i = 0; i < 8; i++) cTime += s[i];
        else {
            hh += 12;
            cTime += to_string(hh);
            for (int i = 2; i < 8; i++) cTime += s[i];
        }
    }
    cout << cTime;

    return cTime;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
