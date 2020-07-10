// Problem

// Bucket is planning to make a very long journey across the countryside by bus. Her journey consists of N bus routes, numbered from 1 to N in the order she must take them. The buses themselves are very fast, but do not run often. The i-th bus route only runs every Xi days.

// More specifically, she can only take the i-th bus on day Xi, 2Xi, 3Xi and so on. Since the buses are very fast, she can take multiple buses on the same day.

// Bucket must finish her journey by day D, but she would like to start the journey as late as possible. What is the latest day she could take the first bus, and still finish her journey by day D?

// It is guaranteed that it is possible for Bucket to finish her journey by day D.
// Input

// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the two integers N and D. Then, another line follows containing N integers, the i-th one is Xi.
// Output

// For each test case, output one line containing Case #x: y, where x is the test case number starting from 1 and y is the latest day she could take the first bus, and still finish her journey by day D. 

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution {
private:
    int N;
    int D;
    int arr[1010];
public:
    void Solve(){
        cin >> N;
        cin >> D;
        
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int ans = D;
        for (int i = N-1; i >= 0; i--){
            while (ans % arr[i] != 0)
            {
                ans--;
            }
        }
        cout << ans << endl;

    }
};

int main()
{
    ios_base::sync_with_stdio(0);

    int T; cin >> T;
    for (int i = 0; i < T; i++)
    {
        Solution solution;
        cout << "Case #" << i + 1 << ": ";
        solution.Solve();
    }
}