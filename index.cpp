#include<iostream>

#include<sstream>

#include<string>

using namespace std;
int main()

{

    string s;
while (getline(cin, s, '=')) { 
    string processed;
    for (char c : s) {
        if ('0'<=c&&c<='9' || c == '+' ) {
            processed += c;
        }
    }
    for (char &c : processed) {
        if (c == '+') {
            c = ' ';
        }
    }

    istringstream sin(processed);
    int num;
    int sum = 0;
    while (sin >> num) {
        sum += num;
    }

    cout << sum << endl;
}

return 0;
}