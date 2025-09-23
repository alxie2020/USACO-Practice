/*

*/

#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main () {
    int N,M;
    cin >> N >> M;
    vector<ll> v1(N);
    vector<ll> v2(M);
    vector<ll> values{};
    for (int i=0;i<N;i++) {
        cin >> v1[i];
    }
    for (int i=0;i<M;i++) {
        cin >> v2[i];
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            if (v1[N]<=v2[M]) {
                if (M==1) {
                    values.push_back(v2[1]-v1[i]);
                    break;
                }
                else {  
                    values.push_back(max(v2[j]-v1[i],v1[i]-v2[j-1]));
                    break;
                }
            }
        }
    }
    int max_e=0;
    for (int i=0;i<values.size();i++) {
        if (values[i]>max_e) {
            max_e=values[i];
        }
    }
    cout << max_e;

}