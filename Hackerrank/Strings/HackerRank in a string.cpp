#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
  string hackerr = "hackerrank";
  int k = 0;

  for (int i = 0; i < s.length(); i++) {
    if (k != hackerr.length() && s[i] == hackerr[k]) {
      k++;
    }
  }
  if (k == hackerr.length()) return "YES";
  return "NO";
}

int main() {
  ofstream fout(getenv("OUTPUT_PATH"));

  int q;
  cin >> q;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  for (int q_itr = 0; q_itr < q; q_itr++) {
    string s;
    getline(cin, s);

    string result = hackerrankInString(s);

    fout << result << "\n";
  }

  fout.close();

  return 0;
}
