// leetcode:
// 907. Sum of Subarray Minimums


class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int n = arr.size();
        stack<int> s;
        vector<int> left(n), right(n);

        // Calculate the left boundary of each element
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }

        // Clear the stack for the next iteration
        while (!s.empty()) {
            s.pop();
        }

        // Calculate the right boundary of each element
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        long long ans = 0;

        // Calculate the contribution of each element to the final sum
        for (int i = 0; i < n; ++i) {
            ans = (ans + (long long)arr[i] * (i - left[i]) * (right[i] - i)) % MOD;
        }

        return ans%MOD;
    }
};
