/*
USACO 2015 December Contest, Bronze Problem 1. Fence Painting
Link to problem:
http://www.usaco.org/index.php?page=viewproblem2&cpid=572
Time Complexity: O(1)
Notes: Definitely the most efficient solution. However, I
kept on getting wrong answers.
Solve Time: 30 minutes (whoops)
Difficulty: 1.5
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
    int start1, end1, start2, end2;
    cin >> start1 >> end1 >> start2 >> end2;
    int total_paint=(end1-start1)+(end2-start2);
    int inter_paint=max(min(end1,end2)-max(start1,start2),0);
    cout << total_paint-inter_paint;
}