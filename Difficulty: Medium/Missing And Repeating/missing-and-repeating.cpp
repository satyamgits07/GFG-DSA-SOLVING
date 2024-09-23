//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> v(n, 0);
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        v[arr[i] - 1]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            a = i + 1;
        }
        if (v[i] == 2)
        {
            b = i + 1;
        }
    }
    return {b, a};
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends