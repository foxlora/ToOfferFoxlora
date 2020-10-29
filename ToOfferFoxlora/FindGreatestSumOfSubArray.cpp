#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int sz = array.size();
        vector<int> dp(sz + 1, 1);
        dp[0] = 0; // 表示没有元素
        int ret = array[0];
        for (int i = 1; i <= sz; ++i) {
            dp[i] = max(array[i - 1], dp[i - 1] + array[i - 1]);
            ret = max(ret, dp[i]);
        }
        return ret;
    }
};
/*
int main() {
    Solution s;
    vector<int> c({ 1,2,3,4 });
    int res = s.FindGreatestSumOfSubArray(vector<int> {4,5});
    cout << res << endl;
}
*/