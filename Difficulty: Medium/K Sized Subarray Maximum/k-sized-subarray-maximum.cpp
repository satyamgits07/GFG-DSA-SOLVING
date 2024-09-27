//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
    vector<int> ans;
    int n = arr.size();
    int i = 0;
    int j = 0;
    int maxi = -1;
    while (j < n)
    {
        if (arr[j] > maxi)
        {
            maxi = arr[j];
        }
        if (j - i + 1 == k)
        {
            ans.push_back(maxi);
            if (arr[i] == maxi)
            {
                maxi = -1;
                j = i;
            }
            i++;
        }
        if (j - i + 1 != k)
        {
            j++;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends