/*
USACO 2016 January Contest, Bronze
Problem 1. Promotion Counting
Link to Problem:
https://usaco.org/index.php?page=viewproblem2&cpid=591
Time Complexity:
Notes:
Solve Time:
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    freopen("promte.in", "r", stdin);
	freopen("promote.out", "w", stdout);
    int a,b,c,d,e,f,g,h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    cout << b-a << "\n" << b-a+d-c << "\n" << f-e+d-c+b-a;
}