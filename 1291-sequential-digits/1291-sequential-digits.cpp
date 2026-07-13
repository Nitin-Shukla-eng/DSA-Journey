//TC O(1), SC O(K) NOT HE BEST

class Solution {
public:         
    vector<int> ans;

    void solve(int num, int nextDigit, int low, int high) {
        if (num > high)
            return;

        if (num >= low)
            ans.push_back(num);

        if (nextDigit > 9)
            return;

        solve(num * 10 + nextDigit, nextDigit + 1, low, high);
    }

    vector<int> sequentialDigits(int low, int high) {

        for (int start = 1; start <= 9; start++) {
            solve(start, start + 1, low, high);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};