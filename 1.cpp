#include <bits/stdc++.h>
using namespace std;
int main()
{
    int upp = 0,lww = 0;
    string n;
    getline(cin, n);
    for(int i = 0; i < n.length(); i++){
        if(n[i] >= 'A' && n[i] <= 'Z'){
            upp++;
        }
        else if(n[i] >= 'a' && n[i] <= 'z'){
            lww++;
        }
    }
    cout << lww << " " << upp;
    return 0;
}