#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int sum = 0, count = 0;
        for (int n : nums) {
            sum += n;
            int rem = ((sum % k) + k) % k;
            if (m.count(rem)) count += m[rem];
            m[rem]++;
        }
        return count;
    }
};

int main() {
    vector<int> nums = {4,5,0,-2,-3,1};
    int k = 5;
    Solution s;
    cout << s.subarraysDivByK(nums, k);
}
