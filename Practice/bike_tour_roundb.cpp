// Problem

// Li has planned a bike tour through the mountains of Switzerland. His tour consists of N checkpoints, numbered from 1 to N in the order he will visit them. The i-th checkpoint has a height of Hi.

// A checkpoint is a peak if:

//     It is not the 1st checkpoint or the N-th checkpoint, and
//     The height of the checkpoint is strictly greater than the checkpoint immediately before it and the checkpoint immediately after it.

// Please help Li find out the number of peaks.

// Input
// The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Hi.

// Output
// For each test case, output one line containing Case #x: y, where x is the test case number starting from 1 and y is the number of peaks in Li's bike tour. 

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

class Solution {
private:
    int N;
    int arr[110];
public:
    void Solve(){
        cin >> N;
        for (int i = 0; i < N; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 1; i < N-1; i++)
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1])
                ans++;
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