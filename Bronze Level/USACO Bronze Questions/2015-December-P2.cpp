/*
USACO 2015 December Contest, Bronze Problem 2. Speeding Ticket
Link to problem:
https://usaco.org/index.php?page=viewproblem2&cpid=568
Time Complexity: O(100M+100N)
Notes: Maybe there's a more efficient solution, but I 
feel like this one is way more intuitive.
Solve Time: about 25 minutes
Difficulty: 3
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);
    int N,M;
    cin >> N >> M;
    vector<int> dis1(N);
    vector<int> dis2(M);
    vector<int> spe1(N);
    vector<int> spe2(M);
    vector<int> speed_lim{};
    vector<int> speed_bes{};
    vector<int> over{};
    for (int i=0;i<N;i++) {
        cin >> dis1[i] >> spe1[i];
    }
    for (int i=0;i<M;i++) {
        cin >> dis2[i] >> spe2[i];
    }
    for (int i=0;i<N;i++) {
        for (int j=0;j<dis1[i];j++) {
            speed_lim.push_back(spe1[i]);
        } 
    }
    for (int i=0;i<M;i++) {
        for (int j=0;j<dis2[i];j++) {
            speed_bes.push_back(spe2[i]);
        }
    }
    for (int i=0;i<100;i++) {
        over.push_back(speed_bes[i]-speed_lim[i]);
    }
    int max_over=0;
    for (int i=0;i<100;i++) {
        if (max_over<over[i]) {
            max_over=over[i];
        }
    }
    cout << max_over;
    
}