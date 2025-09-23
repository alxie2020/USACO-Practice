#include<bits/stdc++.h>
using namespace std;

int main () {
    int N,M;
    cin >> N >> M;
    vector<int> max_sum{};
    vector<int> max_max_sum{};
    vector<int> values{};
    int rect[N][M];
    for (int i=0;i<N;i++) {
        for (int j=0;j<M;j++) {
            cin >> rect[i][j];
        }
    }
    for (int i=0;i<M-1;i++) {
        for (int j=i+1;j<M;j++) {
            for (int k=0;k<N;k++) {
                max_sum.push_back(rect[k][i]+rect[k][j]);
            }
        }
    }
    for (int j=0;j<(M)*(M+1)/2;j++) {
        for (int i=0;i<N;i++) {
            values.push_back(max_sum[i]);
            auto max_it1=max_element(values.begin(),values.end());
            int max_e1=*max_it1;
            int max_e2=0;
            for (int i=0;i<N;i++) {
                if (max_e2<values[i] && values[i]!=max_e1) {
                    max_e2=values[i];
                }
            }
            max_max_sum.push_back(max_e1);
            max_max_sum.push_back(max_e2);
            max_e1=0;
            max_e2=0;
            values.clear();
            max_sum.erase(max_sum.begin()+N);
        }
    }
    auto max_it2=max_element(max_max_sum.begin(),max_max_sum.end());
    int max_e3=*max_it2;
    cout << max_e3;
}
