#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k, p;
        cin >> n >> k >> p;
        vector<int> arr(n);
        int i;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i]%p;
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        vector<pair<int, int>> vec;
        for(i = 0; i < n ; i++){
            int j = i, cnt = 0;
            while(j < n && arr[j] == arr[i])
                cnt++, j++;
            int x = arr[i];
            if((3*x*x%p) == k)
                ans += cnt*(cnt - 1)/2;
            int y = (((x*x%p)*x%p - k*x%p)%p + p)%p;
            vec.push_back({y, cnt});
            i = j - 1;
        }
        sort(vec.begin(), vec.end());
        for(i = 0; i < vec.size() ; i++){
            int j = i, lin = 0, sqr = 0;
            while(j < vec.size() && vec[i].first == vec[j].first)
                lin += vec[j].second, sqr += vec[j].second*vec[j].second, j++;
            ans += (lin*lin - sqr)/2;
            i = j - 1;
        }
        cout << ans << '\n';
    }
}