/*
USACO 2016 January Contest, Bronze
Problem 1. Promotion Counting
Link to Problem:
https://usaco.org/index.php?page=viewproblem2&cpid=591
Time Complexity: O(1)
Notes: Not really anything to say here. It's a simple
question, you just need to think about it.
Solve Time: 5 min
Difficulty: 1
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cout << d-c+f-e+h-g << "\n" << f-e+h-g << "\n" << h-g;
}