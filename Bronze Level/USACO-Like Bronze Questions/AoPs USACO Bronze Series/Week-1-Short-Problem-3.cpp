/*
The Cowllatz Conjecture
Picture shown in the last file
Time Complexity: O(count)
Notes: Very simple problem.
Solve Time: 5 mins
*/
#include<bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    int count=0;
    while(N!=1) {
        count++;
        if (N%2) {
            N=3*N+1;
        }
        else {
            N/=2;
        }
    }
    cout << count+1;
}